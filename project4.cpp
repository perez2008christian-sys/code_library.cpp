#include <iostream>
using namespace std;
//each req is split apart to make work more simple

int main() {
    //takes the name of the item
    string ItemName;
    cout << "Enter Item Name: ";
    cin >> ItemName; "\n";
    
    //gives the Price var a value
    double Price;
    cout << "Item Price: ";
    cin >> Price; "\n";
    
    //same as above but for Amount
    int Amount;
    cout << "How Many Purchesed: ";
    cin >> Amount; "\n";
    
    //simple multiplication to calculate subtotal
    double subtotal;
    subtotal = Price * Amount;
    cout << "Subtotal: $" << subtotal << ".00\n";
    
    //makes the storefee var to use later
    double storefee;
    storefee = 2.00;
    cout << "Store Fee: $" << storefee << ".00\n";
    
    //simple additon adding storefee and subtotal
    double Total;
    Total = storefee + subtotal;
    cout << "Your total is: $" << Total <<".00\n";
    
    //EXTRA CREDIT
    double AmountPaid;
    cout << "Enter amount paid: ";
    cin >> AmountPaid; "\n";
    
    //EXTRA CREDIT
    double Change;
    Change = AmountPaid - Total;
    cout << "Your change is: $" << Change;
}
