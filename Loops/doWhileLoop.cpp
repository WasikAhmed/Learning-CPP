// The do...while loop is a variant of the while loop.
// the body of do...while loop is executed once before the condition is checked

#include <iostream>
using namespace std;

int main() {

    int i = 10;
    do {
        // body
        cout<< "Value of i: "<< i<< endl;
        i++;
    }
    while(i<5);
    // The value of i is greater than 5. But still the loop executed once using do...while loop.
    // using while loop
    while (i<5)
    {
        cout<< "Hello, World!"<< endl;
    }
    // The condition did not met so the loop did not execute using while loop.


    int j = 10;
    do {
        // body
        cout<< "Value of j: "<< j<< endl;
        j++;
    }
    while(j<20);
    // The condition met so the loop executed.

    return 0;
}