#include <iostream>
using namespace std;

int main() {
  // Pointers will store the address of the variable.
  int roll_number = 23;
  string name = "Arun Jeyamari";
  long phone_number = 9629319232L;

  int *roll_num_ptr = &roll_number;
  // Intialized the pointer with the address of the roll number,
  // cout << roll_num_ptr << endl;
  int number1 = 100;
  int number2 = number1;
  // cout << number2 << endl;
  number2 = 101;
  // cout << number2 << endl;
  // cout << number1 << endl;

  //Lets create a referene variable now when it changes orginal value will get changed.

  // This is the power of referencing
  
  int &number3 = number1;
  // cout << number3 << endl;
  number3 = 555;
  // cout << number3 << endl;
  // cout << number1 << endl;
  int *ptr1 = &number1;
  int *ptr2 = &number3;
  cout << ptr1 << endl;
  cout << ptr2<< endl;

  }