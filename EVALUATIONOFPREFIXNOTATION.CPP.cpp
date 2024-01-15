#include<iostream>
#include<stack>
using namespace std ; 
#include<string>
int main()
{
    string st ; 
    cin>>st ; 
    stack<int> s ; 
    int  i  ; 
    for(i = st.length()-1 ; i>=0 ;i--)
    {
        if(isdigit(st[i]))
        {
            s.push(st[i]-'0') ; 
        }
// or this can be used 
// if(st[i]>='0' && st[i]<='9')
        // {
        //     s.push(st[i]-'0') ; 
// }
        else
        {
            int a = s.top() ; 
            s.pop() ; 
            int b = s.top() ;
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