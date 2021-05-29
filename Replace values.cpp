#include <iostream>
using namespace std;

int main() {
  int num1;
  int num2;
  cout << "Type first value: "; // Type a number and press enter
  cin >> num1; // Get user input from the keyboard
  cout << "Type second value: "; // Type a number and press enter
  cin >> num2; // Get user input from the keyboard
  
  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;
  cout << "Your first value is : " << num1;
  cout << "\nYour second value is: " << num2;
  return 0;
}
