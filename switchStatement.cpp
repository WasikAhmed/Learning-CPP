// switch statement is used to make decisions based on the value of an expression.

#include <iostream>
using namespace std;

// switch(expression) {
//     case value:
//         code block
//         break;
//     default:
//         default code block
// }

int main() {

    // get order number (1-5)
    // print the order

    int order;
    cout<< "Please order your food (Choose beween 1-5)"<< endl;
    cout<< "Input order number: ";
    cin>> order;

    switch(order) {
        case 1:
            cout<< "You ordered Pizza!"<< endl;
            break;
        case 2:
            cout<< "You ordered Tacos!"<< endl;
            break;
        case 3:
            cout<< "You ordered Hamburger!"<< endl;
            break;
        case 4:
            cout<< "You ordered Sushi!"<< endl;
            break;
        case 5:
            cout<< "You ordered Chocolate Cake!"<< endl;
            break;
        default:
            cout<< "Invalid order number. Please try again!"<< endl;
    }

    return 0;
}