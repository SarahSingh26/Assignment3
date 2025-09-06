#include <iostream>
using namespace std;
#include <stack>
bool isBalanced(string expr){
    stack <char> s;
    for(char ch:expr){
        if(ch=='{' || ch=='[' || ch=='(')
            s.push(ch);
        
        else if (ch=='}'||ch==']' || ch==')'){
            if(s.empty())
            return false;
            char top=s.top();
            s.pop();
            // check for matching pair
        if(ch=='}' && top!='{' || ch==']' && top!='[' || ch==')' && top!='(')
            return false;
        }
    }
    return s.empty();
}
int main() {
    string expr;
    cout<<"enter the expression"<<endl;
    cin>>expr;
    
    if(isBalanced(expr)){
        cout<<"balanced!!";
        
    }
    else
    cout<<"not balanced!!";

    return 0;
}