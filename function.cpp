// function
// a block of code that performs a specific task

#include <iostream>
using namespace std;

// return_data_type function_name(parameters) {
    // code block
// }

// defining a function that returns no value (void)
void printMenu() 
{
    cout<< "        Tasty Bites     "<< endl;
    cout<< "1. Spaghetti Carbonara - $12.99\n";
    cout<< "2. Margherita Pizza - $10.99\n";
    cout<< "3. Chicken Alfredo - $14.99\n";
    cout<< "4. Grilled Salmon - $16.99\n";
    cout<< "5. Vegetable Stir-Fry - $11.99\n";
}

// defining a function that returns integer value (int)
int takeOrder() 
{
    cout<< "Please input order number: ";
    int orderNo;
    cin>> orderNo;

    return orderNo;     // returning an integer value
}

void serve(int orderNo)   // parameterized function
{
    switch (orderNo)
    {
    case 1:
        cout<< "Spaghetti Carbonara is served!"<< endl;
        break;
    case 2:
        cout<< "Margherita Pizza is served!"<< endl;
        break;
    case 3:
        cout<< "Chicken Alfredo is served!"<< endl;
        break;
    case 4:
        cout<< "Grilled Salmon is served!"<< endl;
        break;
    case 5:
        cout<< "Vegetable Stir-Fry is served!"<< endl;
        break;
    default:
        cout<< "Please choose correct order no from Menu"<< endl;
        break;
    }
}

int main() {

    // calling function
    printMenu();

    int orderNo = takeOrder();  // storing the return value of takeOrder() function

    cout<< "Your order no: "<< orderNo<< endl;

    serve(orderNo);

    return 0;
}