// array is a collection of elements of the same data type
// stored in contiguous memory locations
// each element is accessed using an index
// fixed size

#include <iostream>
using namespace std;

int main() {

    int nums[5];
    nums[0] = 10;
    nums[1] = 20;
    nums[2] = 30;
    nums[3] = 40;
    nums[4] = 50;

    cout<< "Elements in nums(array): ";
    cout<< nums[0]<< " "<< nums[1]<< " "<< nums[2]<< " "<< nums[3]<< " "<< nums[4]<< endl;

    // finding the size of an array
    int size = sizeof(nums) / sizeof(nums[0]);
    cout<< "Size of nums(array): "<< size<< endl;

    // using for loop
    int n=5;
    string friends[n];
    cout<< "Enter your friend's name(Total 5): "<< endl;
    
    for(int i=0; i<n; i++) {
        cin>> friends[i];
    }

    cout<< "Your friends: ";
    for(int i=0; i<n; i++) {
        cout<< friends[i]<< ", ";
    }
    cout<< endl;

    return 0;
}