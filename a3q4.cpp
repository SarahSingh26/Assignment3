#include <iostream>
using namespace std;
#include <stack>
#include <string>
int precedence(char op){
    if(op=='+' || op=='-')
    return 2;
    if (op=='*' || op=='/')
    return 1;
return 0;    
}
string infixToPostfix(string infix){
    stack <char> s;
    string result="";
    for(int i=0;i<infix.length();i++){
        char ch=infix[i];
        // for alpha numeric
        if(isalnum(ch))
        result+=ch;
        else if(ch=='(')
        s.push(ch);
        else if (ch==')'){
            while( !s.empty() && s.top()!='('){
                result+=s.top();
                s.pop();
            }
            s.pop();
        }
    
    else{
        while( !s.empty() && precedence(s.top())>=precedence(ch)){
            result+=s.top();
            s.pop();
        }
        s.push(ch);
     }
     
    }
    while( !s.empty()){
        result+=s.top();
        s.pop();
    }
    
 return result;   
}

int main() {
    
string infix;
cout<<"enter the infix expression"<<endl;
cin>>infix;
string res=infixToPostfix(infix);
cout<<"result "<<res<<endl;


    return 0;
}