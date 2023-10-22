// class is a blueprint for creating objects
// a template that describes how objects of that class should work
// It defines the structure and behavior of objects by specifying their attributes and methods
// attributes -> variables
// methods -> functions

#include <iostream>
using namespace std;

class Student 
{
    public:
    int id;
    string name;
    double cgpa;

    void displayInfo() 
    {
        cout<< "Name: "<< name<< endl;
        cout<< "Id: "<< id<< endl;
        cout<< "CGPA: "<< cgpa<< endl;
    }
};

int main() 
{
    // creating an object of student class
    Student s1;

    // setting value of attributes
    s1.name = "Wasik Ahmed";
    s1.id = 47698;
    s1.cgpa = 3.7;

    // calling methods
    s1.displayInfo();

    return 0;
}