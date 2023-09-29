// The break statement used to jump out of a loop.
// The continue statement breaks one iteration in a loop.

#include <iostream>
using namespace std;

int main() {

    cout<< "Break Statement"<< endl;
    int count = 0;
    for(int i=0; i<10; i++) {
        if(i == 5) {
            break;
        }
        else {
            cout<< "Counting "<< i<< endl;
        }
    }

    cout<< "Continue Statement"<< endl;
    count = 0;
    for(int i=0; i<10; i++) {
        if(i==5) {
            continue;
        }
        else {
            cout<< "Counting "<< i<< endl;
        }
    }

    return 0;
}