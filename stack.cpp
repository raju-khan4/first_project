#include<iostream>
using namespace std;

const int N = 5;         
int stack[N];           
int top = -1;            

void push(){
    int x;
    cout << "Enter data you want to insert: ";
    cin >> x;
    if(top == N - 1) {
        cout << "Overflow" << endl;
    }
    else {
        top++;
        stack[top] = x;
    }
}

void pop(){
    if(top == -1) {
        cout << "Underflow" << endl;
    }
    else {
        int value = stack[top];
        top--;
        cout << "Deleted value: " << value << endl;
    }
}

void display(){
    if(top == -1) {
        cout << "Stack is empty" << endl;
        return;
    }

    cout << "Stack elements: ";
    for(int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main(){
    push();
    push();
    push();
    push();
    push();
    pop();
    display();

    return 0;
}
