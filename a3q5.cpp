#include <iostream>
#include <stack>
#include <sstream>  
using namespace std;
int evaluatePostfix(string expr) {
    stack<int> s;  
    stringstream ss(expr);
    string token;

    while (ss >> token) {
        
        if (isdigit(token[0])) {
            s.push(stoi(token)); 
        }
        else {
        
            int val2 = s.top(); s.pop();
            int val1 = s.top(); s.pop();

            if (token == "+") s.push(val1 + val2);
            else if (token == "-") s.push(val1 - val2);
            else if (token == "*") s.push(val1 * val2);
            else if (token == "/") s.push(val1 / val2);
        }
    }

    return s.top();
}

int main() {
    string expr ;
    cin>>expr;
    cout << "Postfix Expression: " << expr << endl;

    int result = evaluatePostfix(expr);
    cout << "Result = " << result << endl;

    return 0;
}