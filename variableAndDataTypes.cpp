// variables are containers for storing data values

// Data Types and Constraints
// int - stores integer numbers
// float - stores floating point numbers - size 4 bytes - 7 decimal digits precision - must add suffix f at end of value
// double - stores floating point numbers - size 8 bytes - 15 decimal digits precision
// char - stores single characters
// string - stores text
// bool - Boolean - true or false
// const - declare constant variable - unchangeable

#include <iostream>
using namespace std;

int main() {

    int myIntegerNum = 10;
    float myFloatNum = 20.12345678;
    double myDoubleNum = 10.1234567890123456;
    char myCharacter = 'a';
    string myString = "Hello, World";
    bool myBool = true;
    const int myConstantInteger = 100;
    // myConstantInteger = 555; //-- this operation will not work
    // myIntegerNum = 555; //-- this operation will work
    // int x=10, y=20, z=30; //-- declare more than one variable of same data type
    // int x, y, z;
    // x = y = z = 100; //-- assing same value to multiple variables

    // print variable
    cout<< myIntegerNum<< endl;
    cout<< myFloatNum<< endl;
    cout<< myDoubleNum<< endl;
    cout<< myCharacter<< endl;
    cout<< myString<< endl;
    cout<< myBool<< endl;
    cout<< myConstantInteger<< endl;

    // print data type
    cout<< typeid(myIntegerNum).name()<< endl;
    cout<< typeid(myFloatNum).name()<< endl;
    cout<< typeid(myDoubleNum).name()<< endl;
    cout<< typeid(myCharacter).name()<< endl;
    cout<< typeid(myString).name()<< endl;
    cout<< typeid(myBool).name()<< endl;
    cout<< typeid(myConstantInteger).name()<< endl;


    return 0;
}