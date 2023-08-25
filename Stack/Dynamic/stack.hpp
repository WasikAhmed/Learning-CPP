#include <iostream>
using namespace std;

template<typename T>
class Stack {
private:
    T* stack;
    int Top, MaxSize;

public:
    Stack(int);
    ~Stack();
    bool isEmpty();
    bool isFull();
    bool push(T);
    bool pop();
    T top();
    void show();
    void resize();
};

template<typename T>
Stack<T>::Stack(int size) {
    MaxSize = size;
    Top = -1;
    stack = new T[MaxSize];
}
template<typename T>
Stack<T>::~Stack() {
    delete[] stack;
}
template<typename T>
bool Stack<T>::isEmpty() {
    return Top == -1;
}
template<typename T>
bool Stack<T>::isFull() {
    return Top == MaxSize - 1;
}
template<typename T>
bool Stack<T>::push(T element) {
    if(!isFull()) {
        stack[++Top] = element;
        return true;
    }
    resize();
    return false;
}
template<typename T>
bool Stack<T>::pop() {
    if(!isEmpty()) {
        Top--;
        return true;
    }
    return false;
}
template<typename T>
T Stack<T>::top() {
    return stack[Top];
}
template<typename T>
void Stack<T>::show() {
    if(!isEmpty()) {
        for(int i=Top; i>=0; i--) {
            cout<< stack[i]<< " ";
        }
        cout<< endl;
    }
}
template<typename T>
void Stack<T>::resize() {
    int size;
    
    cin>> size;
    MaxSize += size;

    T* temp_stack = new T[MaxSize];
    for(int i=0; i<MaxSize; i++) {
        temp_stack[i] = stack[i];
    } 
    delete[] stack;
    stack = temp_stack;
}