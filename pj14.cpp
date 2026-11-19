#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    
    fstream input("input.txt");
    
    if(input){
        cout << "open\n";
    } else{
        cout << "closed";
    }
    
    string words;
    int count = 0;
    
    while(input >> words){
        count++;
    }
    
    cout << count << "\n";
    
    input.close();
    
    fstream output("output.txt");
    
    if(output){
        cout << "open\n";
    } else{
        cout << "closed";
    }
    
    output << "The amount of words is: " << count;
    output.close();
    
    if(output){
        cout << "Success!!";
    }else{
        cout << "Fail!";
    }
    
    
    return 0;
}
