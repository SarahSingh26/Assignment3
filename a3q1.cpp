#include <iostream>
#define MAX 5
using namespace std;
class stack{
    int arr[MAX];
    int top;
   public:
   stack(){
       top=-1;
       
   }
bool isEmpty(){
    return (top==-1);
} 
bool isFull(){
    return (top==MAX-1);
}
void push(int x){
    if(isFull()){
        cout<<"stack is overflown";
    }
    else
    arr[++top]=x;
    
}
void pop(){
    if(isEmpty()){
        cout<<"no element found";
    }
    else
    cout<<"the popped element is "<<arr[top--];
}
void peek(){
    if(not isEmpty()){
        cout<<"top element is "<<arr[top];
    }
    else
    cout<<"stack is empty";
}
void display(){
    if(isEmpty()){
        cout<<"stack is empty";
    }
    else{
        cout<<" the stack elements are ";
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
            cout<<endl;
        }
    }
   
}
};

int main() {
   stack obj;
   obj.push(3);
   obj.push(2);
   obj.push(5);
   obj.push(1);
   obj.display();
   obj.pop();
   obj.display();
   obj.peek();
   obj.display();
   
    return 0;
}