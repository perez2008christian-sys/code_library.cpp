#include <iostream>
#include <string>
using namespace std;


int main() {
    double scores[5];
    double total = 0;
    double average;
    
    for(int i = 0; i < 5; i++) {
        cout << "Enter Your Score: "; "\n";
        cin >> scores[i];
    }
    
    double max = scores[0];
    double min = scores[0];
    
    for(int k = 0; k < 5; k++) {
        total = total + scores[k];
    }
    
    average = total / 5;
    
    
    for(int j = 0; j < 5; j++) {
        if(scores[j] > max) {
            max = scores[j];
        } 
        if(scores[j] < min) {
            min = scores[j];
        }
    }
    
    cout << "--- Score Report --- \n";
    cout << "Your Total Is: " << total << "\n";
    cout << "Average: " << average << "\n";
    cout << "Max: " << max << "\n";
    cout << "Min: " << min << "\n";
    
    return 0;
}
