#include <iostream>
using namespace std;

int main() {
  int year;
  cout << "Enter the year: ";
  cin >> year;

  if (year < 1000 || year > 9999) {
    cout << "Invalid year";
  }
  else if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    cout << "Leap year";
  }
  else {
    cout << "Not a leap year";
  }

  return 0;
}
