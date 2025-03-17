//CSC 134
//M3HW1--bronze
//Edith Gonzalez
//03-16-25


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Question 1
void task1() {

    string response1, response2, response3;
    cout << "Welcome to Mcdonalds, what can I get you?" << endl;
    getline(cin, response1);
    cout << "Anything else with that order?" << endl;
    getline(cin, response2);
    cout << "That will be $10 pull up to the next window." << endl;
    getline(cin, response3);
}

//Question 2
void task2() {

    int mealPrice;          
    double orderType;
    double tax;
    double tipAmount = 0.15;
    double taxAmount;
    double total;

    cout << "Please enter the price of the meal: $";
    cin >> mealPrice;
    cout << "If order is takeout enter 1, if dine-in 2: ";
    cin >> orderType;

    const double TAX_RATE = 0.07;
    taxAmount = mealPrice * TAX_RATE;

    // Calculating Tip
    if (orderType == 2) 
    {
        tipAmount = mealPrice * 0.15;
    }

    // meal + tip + tax
    total = mealPrice + taxAmount + tipAmount;

    // Printing Receipt
    cout << fixed << setprecision(2);
    cout << "\nReceipt:" << endl;
    cout << "Meal Price: $" << mealPrice << endl;
    cout << "Tax: $" << taxAmount << endl;

    if (orderType == 2) 
    {
        cout << "Tip (15%): $" << tipAmount << endl;
    }
    else 
    {
        cout << "Tip: $0.00" << endl;
    }

    cout << "Total Amount: $" << total << endl;

    

}


int main () {
    task1();
    task2();
    
  return 0; 

} 