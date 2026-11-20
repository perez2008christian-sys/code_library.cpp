#include <iostream>
using namespace std;
int main(){
int item[5];
int total = 0;
int max = 0;
int min;

    for(int i = 1; i < 6; i++){
        cout << "Enter quantity for item " << i << ": "; "\n";
        cin >> item[i];
        total = total + item[i];
        
        if(max < item[i]){
            max = item[i];
        }
        
        if (min > item[i]){
            min = item[i];
        }
        
    }
    
    
    cout << "=====Report=====";
    for(int list = 0; list < 6; list++){
    cout << "Item " << list <<": " << item[list] << "\n";
    }
    
    for(int k = 0; k < 5; k++){
        if(item[k] < 5){
            cout << "Item " << k + 1 << " Has Low Stock \n";
        }
    }
    
    cout << "The highest stock is: " << max << "\n";
    cout << "The Lowest stock is: " << min << "\n";
    cout << "Total amount of item: " << total << "\n";
    
    return 0;
}
