#include <iostream>
#define MAX 13
using namespace std;

class Stack {
    char arr[MAX];   
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX - 1);
    }

    void push(char x) {
        if (isFull()) {
            cout << "Stack overflow!" << endl;
        } else {
            arr[++top] = x;
        }
    }

    void displayWord() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
        } else {
            for (int i = 0; i <= top; i++) {   
                cout << arr[i];
            }
            cout << endl;
        }
    }
    void inversionDisplayWord() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
        } else {
            for (int i = top; i >=0; i--) {   
                cout << arr[i];
            }
            cout << endl;
        }
    }
};

int main() {
    Stack obj;
    obj.push('d');
    obj.push('a');
    obj.push('t');
    obj.push('a');
    obj.push('S');
    obj.push('t');
    obj.push('r');
    obj.push('u');
     obj.push('c');
     obj.push('t');
     obj.push('u');
     obj.push('r');
     obj.push('e');

    obj.displayWord();
    obj.inversionDisplayWord();
    return 0;
}
