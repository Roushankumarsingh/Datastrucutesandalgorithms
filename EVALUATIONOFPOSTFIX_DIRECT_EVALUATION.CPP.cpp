// You are using GCC
#include<iostream>
#include<stack>
using namespace std ; 
int main()
{
    string st ; 
    cin>>st ; 
    stack<int> s ; 
    int l = st.length() ; 
    for(int i=0 ; i<l ; i++)
    {
        // if it is an operand 
        if(isdigit(st[i]))
        {
            s.push(st[i]-'0') ; 
        }
        // if it is an operator 
        else
        {
            int b = s.top() ; 
            s.pop() ; 
            int a = s.top() ; 
            s.pop() ;
            switch(st[i])
            {
                case '+' :
                {
                    int c = a+b ; 
                    s.push(c) ; 
                    break ; 
                }
                case '-' :
                {
                    int c = a-b ; 
                    s.push(c) ;
                    break ;
                }
                case '*' :
                {
                    int c = a*b ; 
                    s.push(c) ; 
                    break;
                }
                case '/' :
                {
                    int c = a/b ; 
                    s.push(c) ;
                    break ; 
                }
            }
            
        }
    }
    cout<<s.top()<<endl;
    return 0 ;
}
// both the code have same output but only difference is using switch in first and if and else in the second 
// #include<iostream>
// #include<stack>
// using namespace std ; 
// #include<string>
// int main()
// {
//     cout<<"Enter the value to be converted from the postfix to in direct answer " <<endl;
//     string st ; 
//     cin>>st ; 
//     stack<int> s ; 
//     int i ; 
//     for(i=0 ; i<st.length() ; i++)
//     {
//         if(isdigit(st[i]))
//         {
//             s.push(st[i]-'0') ; 
//         }
//         else
//         {
//             int b = s.top() ; 
//             s.pop() ; 
//             int a = s.top() ; 
//             s.pop() ;
//             if(st[i] == '+')
//             {
//                 int c = a+b  ; 
//                 s.push(c) ; 
//             }
//             else if(st[i] == '-')
//             {
//                 int c = a-b ; 
//                 s.push(c) ; 
//             }
//             else if(st[i] == '*')
//             {
//                 int c = a*b ; 
//                 s.push(c) ; 
//             }
//             else
//             {
//                 int c = a/b ; 
//                 s.push(c) ; 
//             }
//         }
//     }
//     cout<<s.top()<<endl;
//     return 0 ;
// }