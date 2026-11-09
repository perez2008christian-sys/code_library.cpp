#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream ExpenseAmnts("expenses.txt");
    
     if(ExpenseAmnts){
        cout << "Open \n";
    } else{
        cout << "closed";
    }
    ExpenseAmnts.close();
 
    fstream readexpense("expenses.txt");
    double amount;
    double total = 0;
    double average;
    double highest = 12.50;
    double lowest = 12.50;
    
    while(readexpense >> amount){
        cout << amount << "\n";
        total = total + amount;
        
    if(amount > highest){
        highest = amount;
    } 
    if(amount < lowest){
        lowest = amount;
    }
}
    
    average = total / 5;
    
    cout << "Your Total Is: " << total << "\n";
    cout << "Average: " << average << "\n";
    cout << "Highest Expense: " << highest << "\n";
    cout << "Lowest Expense: " << lowest << "\n";
    
    return 0;
}
