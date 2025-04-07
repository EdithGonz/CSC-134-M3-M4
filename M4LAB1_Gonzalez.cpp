//CSC 134
//M4LAB1
//Edith Gonzalez
//04-06-25


#include <iostream>
using namespace std;
int main() 
{
  int width, height;
  width = 5;
  height = 5;

  // one row
  for (int i=0; i < width; i++) {
    cout << "*" << " ";
  }
  cout << endl;

  // one column
  for (int j=0; j < height; j++) {
    cout << "*" << endl;
  }
  
  for (int j=0; j < height; j++) {
    for (int i=0; i < width; i++) {
        cout << "*" << " ";
    }
    cout << endl;
  }


  
  return 0; 

} 