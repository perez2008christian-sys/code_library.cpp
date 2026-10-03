// Name: Christian Perez
// Project: Budget Tracker
// Purpose: This program will collect informatrion about the user and track their spending properly monthly and what they should prioritize
// eventually help users lower their spending and save money 

#include <iostream>
using namespace std;

int main () {
    //track what the user is currenty spending 
  double spendingamountmonth;
  cout << "What are you currently spending a month: "; "\n";
  cin >> spendingamountmonth;
  
  //User picks a payment for the budget tracker to priotitize
  string prioritypay;
  cout << "What payment do you want to prioritize: "; "\n";
  cin >> prioritypay;
  
  //user gives the budget tracker information to use
  double currentlymaking;
  cout << "What are you making monthly: "; "\n";
  cin >> currentlymaking;
  
  //allows the user to plan how much they want to save
  string savingsplan;
  cout << "How much do you plan on saving this month: "; "\n";
  cin >> savingsplan;
}
