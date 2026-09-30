#include <iostream>
using namespace std;

int main() {
    string ItemName;
    cout << "Enter Item Name: ";
    cin >> ItemName; "\n";
    
    double Price;
    cout << "Item Price: ";
    cin >> Price; "\n";
    
    int Amount;
    cout << "How Many Purchesed: ";
    cin >> Amount; "\n";
    
    double subtotal;
    subtotal = Price * Amount;
    cout << "Subtotal: $" << subtotal << ".00\n";
    
    double storefee;
    storefee = 2.00;
    cout << "Store Fee: $" << storefee << ".00\n";
    
    double Total;
    Total = storefee + subtotal;
    cout << "Your total is: $" << Total <<".00\n";
    
    double AmountPaid;
    cout << "Enter amount paid: ";
    cin >> AmountPaid; "\n";
    
    double Change;
    Change = AmountPaid - Total;
    cout << "Your change is: $" << Change;
}
