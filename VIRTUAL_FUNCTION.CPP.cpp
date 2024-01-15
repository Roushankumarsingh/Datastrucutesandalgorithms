#include<iostream>
using namespace std ; 
#include<cstring>
class person
{
    public:
    string title ; 
    float rating ; 
    person(){} ; 
    person(string s , float f)
    {
        title = s ; 
        rating = f ; 
    }
    virtual void display(){} ; 
};
class personv : public person 
{
    public:
    float videolength ; 
    personv(string s , float f , float v) : person(s , f)
    {
        videolength = v ; 
    }
    void display()
    {
        cout<<"The title of the video is :- "<<title<<endl;
        cout<<"The rating of the movie is :- "<<rating<<" out of 5 stars "<<endl;
        cout<<"The videolength of the video is :- "<<videolength<<" minutes"<<endl;
    }
};
class personw : public person 
{
    public:
    int wordcount ; 
    personw(string s , float f , int wc):person(s,f) 
    {
        wordcount = wc ; 
    }
    void display()
    {
        cout<<"The title of the video is :- "<<title<<endl;
        cout<<"The rating of the movie is :- "<<rating<<" out of 5 stars "<<endl;
        cout<<"The wordcount  of the video is :- "<<wordcount<<endl;
    }
};
int main()
{
    string title ; 
    cout<<"Enter the title of the display :- "<<endl;
    cin>>title ; 
    float rating ; 
    cout<<"Enter the rating of the video :- "<<endl;
    cin>>rating ; 
    float videolength ; 
    cout<<"Enter the videolenght of the video :- "<<endl;
    cin>>videolength;
    int wordcount ; 
    cout<<"Enter the wordcount in the video :- "<<endl;
    cin>>wordcount ; 
    cout<<endl;
    personv obj1(title ,rating , videolength) ; 
    personw obj2(title , rating ,wordcount) ; 
    person *obj[2] ; 
    obj[0] = &obj1 ; 
    obj[1] = &obj2 ; 
    obj[0] ->display() ; 
    obj[1]->display() ; 
    return 0 ; 
}