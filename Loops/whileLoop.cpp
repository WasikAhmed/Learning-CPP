// While Loop in C++ is used in situations 
// where we do not know the exact number of iterations of the loop beforehand.
// The loop execution is terminated on the basis of the condition.
// Condition may change during each iteration.
// 'while' loop is more flexible for dynamic condition.

#include <iostream>
using namespace std;

int main() {

    int i = 1;
    cout<< "Value of i = "<< i<< endl;

    while(i < 6) {
        cout<< "BD Cricket Team sucks"<< endl;

        i++;
    }

    cout<< "Value of i = "<<i << endl;

    while(i > -5) {
        cout<< "Watching BD Cricket Team playing is a waste of time. Now I have stones in my heart not in kidney."<< endl;

        i--;
    }

    cout<< "Value of i = "<<i << endl;

    return 0;
}