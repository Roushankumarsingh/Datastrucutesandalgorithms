#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int prec(char c)
{
    if(c == '^')
    {
        return 3 ; 
    }
    else if(c == '*' || c == '/')
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
void InfixToPostfix(string s)
{
    string ns ; 
    stack<char> st ; 
    st.push('$') ; 
    int i ; 
    for(i=0 ; i<s.length() ; i++)
    {
        // if it is an operand 
        if(s[i]>='a' && s[i]<= 'z' || s[i]>='A' && s[i]<= 'Z')
        {
            ns += s[i] ; 
        }
        else if(s[i]== '(')
        {
            st.push('(') ; 
        }
        else if(s[i]==')')
        {
            while(st.top() != '$' && st.top() != '(')
            {
                char c = st.top() ;
                st.pop() ; 
                ns += c ; 
            }
            if(st.top() == '(' )
            {
                char c = st.top() ; 
                st.pop() ; 
            }
        }
        else
        {
            while(st.top() != '$' && prec(s[i]) <= prec(st.top()))
            {
                char c = st.top() ; 
                st.pop() ; 
                ns += c ; 
            }
            st.push(s[i]) ; 
        }
    }
    while(st.top() != '$')
    {
        char c = st.top() ; 
        st.pop() ; 
        ns += c ; 
    }
    cout<<ns ; 
}
int main()
{
    string rous ; 
    cin>>rous ; 
    InfixToPostfix(rous) ; 
    return 0 ; 
}