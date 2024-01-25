#include <iostream>
using namespace std;

int main() {
  // Get the temperature in Celsius from the user.
  float celsius;
  cout << "Enter the temperature in Celsius: ";
  cin >> celsius;

  // Convert the temperature from Celsius to Fahrenheit.
  float fahrenheit = (celsius * 9.0) / 5.0 + 32.0;

  // Print the temperature in Fahrenheit to the console.
  cout << "The temperature in Fahrenheit is " << fahrenheit << " degrees." << endl;

  return 0;
}