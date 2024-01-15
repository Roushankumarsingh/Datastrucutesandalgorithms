#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include<cmath>

using namespace std;

class Employee {
public:
    int id;
    char name[50];
    char addr[100];

    Employee() {
        // Default constructor
    }

    Employee(int _id, string _name, string _addr) {
        id = _id;
        strcpy(name, _name.c_str());
        strcpy(addr, _addr.c_str());
    }

    void show() {
        cout << "Id is " << id << endl << "Name is " << name << endl << "Address is " << addr << endl;
    }
};

void create(Employee obj) {
    ofstream myfile;
    myfile.open("Roushankumarsingh.dat", ios::binary | ios::app);
    myfile.write(reinterpret_cast<char*>(&obj), sizeof(obj));
    myfile.close();
}

void read() {
    Employee obj;
    ifstream myfile;
    myfile.open("Roushankumarsingh.dat", ios::binary);
    while (myfile.read(reinterpret_cast<char*>(&obj), sizeof(obj))) {
        obj.show();
    }
    myfile.close();
}

bool update(int id, string addr) {
    bool found = false;
    Employee obj;
    fstream myfile;
    myfile.open("Roushankumarsingh.dat", ios::in | ios::out | ios::binary);
    while (myfile.read(reinterpret_cast<char*>(&obj), sizeof(obj))) {
        if (obj.id == id) {
            found = true;
            strcpy(obj.addr, addr.c_str());
            myfile.seekg(myfile.tellg() - static_cast<long>(sizeof(obj)), ios::beg);
            myfile.write(reinterpret_cast<char*>(&obj), sizeof(obj));
            break;
        }
    }
    myfile.close();
    return found;
}

void del(int id) {
    Employee obj;
    ifstream myfile;
    myfile.open("Roushankumarsingh.dat", ios::binary);
    ofstream temp("details.dat", ios::binary);
    while (myfile.read(reinterpret_cast<char*>(&obj), sizeof(obj))) {
        if (obj.id != id) {
            // temp.write((char*)(&obj), sizeof(obj);
            temp.write((char*)&obj , sizeof(obj)) ;
        }
    }
    myfile.close();
    temp.close();
    remove("Roushankumarsingh.dat");
    rename("details.dat", "Roushankumarsingh.dat");
}

int main() {
    Employee a(1, "Roushan kumar singh", "sasaram");
    Employee b(2, "Utkarsh singh ", "chapra");
    create(a);
    create(b);
    read();
    update(2, "Baker st");
    read();
    del(2);
    read();
    return 0;
}
