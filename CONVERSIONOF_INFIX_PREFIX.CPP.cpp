#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std ; 
int prec(char c)
{
    if(c == '^')
    {
        return 3 ; 
    }
    else if(c == '/' || c == '*')
    {
        return 2 ; 
    }
    else if(c == '+' || c == '-')
    {
        return 1 ;
    }
    else
    {
        return -1 ; 
    }
}
void InfixToPrefix(string st)
{
    reverse(st.begin(),st.end()) ; 
    string res ; 
    stack<char> s ; 
    s.push('$') ;
    for(int i = 0 ; i<st.length() ; i++)
    {
        //if it is an operand 
        if(st[i]>='a' && st[i]<='z' || st[i]>='A' && st[i]<='Z')
        {
            res += st[i] ; 
        }
        // if it is ( 
        else if(st[i]==')')
        {
            s.push(')') ; 
        }
        // if it is an ) then 
        else if(st[i]=='(')
        {
            while(s.top() != '$' && s.top() != ')') 
            {
                char c = s.top() ;
                s.pop() ; 
                res += c ; 
            }
            if(s.top() == ')')
            {
                char c = s.top() ; 
                s.pop() ; 
            }
        }
        // if it is an operator // 
        else
        {
            while(s.top() != '$' && prec(st[i]) <= prec(s.top()))
            {
                char c = s.top() ; 
                s.pop() ; 
                res += c ; 
            }
            s.push(st[i]) ; 
        }
    }
    while(s.top() != '$')
    {
        char c = s.top() ; 
        s.pop() ; 
        res += c ; 
    }
    reverse(res.begin() , res.end()) ; 
    cout<<res<<endl;
}
int main()
{
    string c ; 
    cin>>c ; 
    InfixToPrefix(c);
    return 0 ; 
}