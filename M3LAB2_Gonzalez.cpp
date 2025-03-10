//CSC 134
//M3LAB2
//Edith Gonzalez
//03-09-25


#include <iostream>
using namespace std;
int main() 
{
  //convert numerical grade into letter

  int numerical_grade; 
  cout << "To see your letter grade, First enter your numerical grade." << endl;
  cin >> numerical_grade;
  
  if (numerical_grade >= 90 && numerical_grade <= 100) 
  {
    cout << "Your letter grade is: A" << endl;     
  }
  else if (numerical_grade >= 80 && numerical_grade <=89)
  {
    cout << "Your letter grade is: B" << endl;
  }
  else if (numerical_grade >= 70 && numerical_grade <= 79)
  {
    cout << "Your letter grade is: C" << endl;
  }
  else if (numerical_grade >= 60 && numerical_grade <= 69)
  {
    cout << "Your letter grade is: D" << endl;
  }
  else if (numerical_grade >= 0 && numerical_grade <= 59)
  {
    cout << "Your letter grade is: F" << endl;
  }
  return 0; 

} 