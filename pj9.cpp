#include <iostream>
using namespace std;

double pcntgrade(double a, double b, double c) {
    double average = a + b + c;
    average = average / 3;
    return average;
}


string ltrgrade(double letter) {
    string ltraverage; 
    if(letter >= 90) {
       ltraverage = "A";
    } else if (letter >= 80) {
       ltraverage = "B";
    } else if (letter >= 70) {
       ltraverage = "C";
    } else if (letter >= 60) {
       ltraverage = "D";
    } else {
        cout << "F";
    }
    return ltraverage;
}

bool pass(int avg) {
    if(avg > 60) {
        cout << "YOU ARE PASSING! \n";
        return true;
    } else {
        cout << "You are currently failing \n";
        return false;
    }
}



int main() {
    double qz1;
    double qz2;
    double qz3;
    
    for(int i = 0; i < 3; i++) {
        cout << "Enter Your Quiz Score: "; "\n";
        if (i == 0) {
            cin >> qz1;
        } else if (i == 1) {
            cin >> qz2;
        } else if (i == 2) {
            cin >> qz3;
        }
    }
    
   
    double qzaverage = pcntgrade(qz1, qz2, qz3);
    cout << "Your Average Quiz Score is: %" << qzaverage << "\n";
    cout <<  "Your Average Grade On Quizzez is: " << ltrgrade(qzaverage) << "\n";
    cout << pass(qzaverage);

    return 0;
}
