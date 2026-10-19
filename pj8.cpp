#include <iostream>
using namespace std;

int main () {
    int option;
    
    cout << "Option 1: Multiplication Table \n";
    cout << "Option 2: Star Pattern \n";
    cout << "Enter Your Choice: "; "\n";
    
    cin >> option;
    
    if (option == 1) {
        for (int i = 1; i <= 5; i++) {
            for (int k = 1; k <= 5; k++) {
                cout << i * k << "\t";
            }
            cout << "\n";
        }
    }
    else if (option == 2) {
        for (int i = 1; i <= 5; i++) {
            for (int k = 1; k <= i; k++) {
                cout << "* ";
            }
            cout << "\n";
        }
    }
    else {
        cout << "Thats Not An Option"; "\n";
    }
    
    return 0;
}
