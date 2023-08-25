#include "stack.hpp"

int main() {

    Stack<string> s(5);

    cout<< s.isEmpty()<< endl;
    s.push("Wasik");
    s.push("Ahmed");
    s.show();
    cout<< s.top()<< endl;
    

    return 0;
}