#include <iostream> 
using namespace std;

int main () {
    int days;
    cout << "How many days do you plan on doing? ";
    cin >> days;
    
    double total;
    double minutes;
    double average;
    
    for (int i = 1; i <= days; i++) {
        cout << "Enter minutes for day " << i << ": ";  "\n";
        cin >> minutes;
        total = total + minutes;
    }
    
    average = total / days;
    
    cout << "----Fitness Report---- \n";
    cout << "Total Minutes: " << total << "\n";
    cout << "Average Minutes: " << average << "\n";
    
    return 0;
}
