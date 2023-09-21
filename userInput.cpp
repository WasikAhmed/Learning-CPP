// cin is a predefined variable that reads data from the keyboard

#include <iostream>
using namespace std;

int main() {

    int id;
    string firstName, lastName, address;
    cout<< "Enter Id: ";
    cin>> id;

    cout<< "Enter first name: ";
    cin>> firstName;
    cout<< "Enter last name: ";
    cin>> lastName;

    // difference between getline() and cin
    // getline only works on strings, cin works for all data types.
    // With getline you can specify the delimiter (by default '\n' is used).
    // cin information uses any whitespace as a delimiter - this includes spaces, newlines, tabs etc.
    // getline removes the delimiter from the input stream, cin does not.

    cout<< "Enter address: ";

    cin.ignore(); 
    // cin.ignore() clears or consumes the next character in the input stream, typically used to remove newline characters or other unwanted characters from the stream.
    getline(cin, address);

    // printing all informations with welcome message
    cout<< "Welcome "<< lastName<< endl;
    cout<< "Your Id: "<< id<< endl;
    cout<< "Full name: "<< firstName <<" "<< lastName<< endl;
    cout<< "Address: "<< address<< endl;    
    
    return 0;
}