//CSC 134
//M4T1
//Edith Gonzalez
//03-30-25


#include <iostream>
using namespace std;
int main() 
{

    /* program 5-3 */
  int number = 0;
  while (number < 5)
  {
    cout << "Hello\n";
    number++;
  }
  cout << "That's all\n";

    /* program 5-6 */
  const int MIN_NUMBER = 1, MAX_NUMBER = 10;
  int num = MIN_NUMBER;
  cout << "Number Number Squared\n";
  cout << "--------------------------\n";
  while (num <= MAX_NUMBER)
  {
    cout << num << "\t\t" << (num * num) << endl;
    num++; 
  }
  




  
  return 0; 

} 