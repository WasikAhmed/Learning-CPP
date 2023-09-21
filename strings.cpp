#include <iostream>
#include <string> // <string> library
using namespace std;

// Strings are used for storing text.
// string variable contains a collection of characters
// string in c++ is an object

int main() {

    string message = "Hello, ";
    string firstName = "Wasik";
    string lastName  = "Ahmed";

    // Concatenation of strings variables
    // using '+' operator
    string welcome = message + firstName + " " + lastName;
    cout<< welcome<< endl;

    // using append() function
    string appendName = firstName.append(" ").append(lastName);
    cout<< appendName<< endl;

    // string length
    // functions: length(), size()
    string fullName = "Wasik Ahmed";
    int nameLength = fullName.length();
    // int nameLength = fullName.size();
    cout<< "Length: "<< endl;

    // Accessing characters
    cout<< "First letter(Full Name): "<< fullName[0]<< endl; // at zero index
    cout<< "First letter(Full Name): "<< fullName.at(0)<< endl; // using str.at(index) function

    return 0;
}