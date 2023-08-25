#include "stack.hpp"

int main() {

    Stack s;
    cout<< s.isEmpty() <<endl;
    cout<< s.isFull() <<endl;

    for(int i=1; i<15; i++) {
        s.push(i);
    }

    s.show();
    cout<< s.top()<< endl;

    s.pop();
    s.show();

    cout<< s.top()<< endl;
    
    return 0;
}