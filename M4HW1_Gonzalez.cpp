//CSC 134
//M4HW1
//Edith Gonzalez
//04-06-25

#include <iostream>
using namespace std;
int main() 
{
  /* Part One: Bronze*/
  cout << "Part One: Bronze" << endl;
  int i = 1;
  while (i <= 12) {
    cout << "5 times " << i << " is " << 5 * i << "." << endl;
    i++;
  }

  /* Part Two and Three: Silver and Gold */
  cout << "Part Two/Three: Silver/Gold" << endl;
  int number;
  while (true) {
    cout << "Enter a number from 1 to 12: ";
    cin >> number;

    if (number >= 1 && number <= 12) {
        break;
    } else {
        cout << "Invalid input. Please enter a number between 1 and 12." << endl;
    }
  }

  i = 1;
  while (i <= 12) {
    cout << number << " times " << i << " is " << number * i << "." << endl;
    i++;
  }

  
  return 0; 

} 