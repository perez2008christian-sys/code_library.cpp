#include <iostream>
using namespace std; 


int main () {
    double totalprice;
cout << "What Snacks Do You Want? \n";
cout << "1. Nutella Sticks \n";
cout << "2. Popcorn \n";
cout << "3. Fruit Snack Gummies \n";
cout << "4. Hot Cheetos \n";
cout << "5. Cheese Sticks \n";

int SnackChoice;
cout << "Which Snack Would You Like? "; "\n";
cin >> SnackChoice;

int qnt1;

 if (SnackChoice == 1 ) {
     cout << "How Many Would You Like To Purchase? ";
     cin >> qnt1;
     totalprice = 3.49 * qnt1;
 } else if (SnackChoice == 2 ) {
     cout << "How Many Would You Like To Purchase? ";
     cin >> qnt1;
     totalprice = 4.00 * qnt1;
 } else if (SnackChoice == 3 ) {
     cout << "How Many Would You Like To Purchase? ";
     cin >> qnt1;
     totalprice = 2.99 * qnt1;
 } else if (SnackChoice == 4 ) {
     cout << "How Many Would You Like To Purchase? ";
     cin >> qnt1;
     totalprice = 2.50 * qnt1;
 } else if (SnackChoice == 5) {
     cout << "How Many Would You Like To Purchase? ";
     cin >> qnt1;
     totalprice = 5.50 * qnt1;
 } else {
     cout << "Invalid choice \n";
     return 0;
 }
 
 
 if (qnt1 >= 5) {
     totalprice = totalprice * .90;
     cout << "---Order Summary---" << "\n";
     cout << "You Recieved A Discount of 10%! \n";
     cout << "Snack: " << SnackChoice << "\n";
     cout << "Quantity: " << qnt1 << "\n";
     cout << "Total Cost: $" << totalprice;
 } else {
     cout << "---Order Summary---" << "\n";
     cout << "Snack: " << SnackChoice << "\n";
     cout << "Quantity: " << qnt1 << "\n";
     cout << "Total Cost: $" << totalprice;
 }

  return 0;
}
