#include <iostream>
#include <string>

using namespace std;

int main() {
  // Get the date from the user.
  string date;
  cout << "Enter the date in DD/MM/YYYY, MM/DD/YYYY, or YYYY/MM/DD format: ";
  cin >> date;

  // Split the date into the day, month, and year.
  int day = stoi(date.substr(0, 2));
  int month = stoi(date.substr(3, 2));
  int year = stoi(date.substr(6, 4));

  // Convert the date to the YYYY/MM/DD format.
  string newDate = to_string(year) + "/" + to_string(month) + "/" + to_string(day);

  // Print the converted date.
  cout << "The converted date is: " << newDate << endl;

  return 0;
}