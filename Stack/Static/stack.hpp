#include <iostream>
using namespace std;

class Stack {
    private:
        int stack[10], Top=0, Max_Size = 10;
    
    public:
        bool isEmpty();
        bool isFull();
        bool push(int element);
        bool pop();
        int top();
        void show();       
};

bool Stack::isEmpty() {
    return Top == 0;
}
bool Stack::isFull() {
    return Top == Max_Size-1;
}
bool Stack::push(int element) {
    if(isFull()) {
        return false;
    }
    stack[Top] = element;
    Top++;
    return true;
}
bool Stack::pop() {
    if(isEmpty()) {
        return false;
    }
    Top--;
    return true;
}
int Stack::top() {
    if(isEmpty()) {
        return -1;
    }
    return stack[Top-1];
}
void Stack::show() {
    for(int i=Top-1; i>=0; i--) {
        cout<< stack[i]<< " ";
    }
    cout<< endl;
}