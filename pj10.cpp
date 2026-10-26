#include <iostream>
using namespace std;


bool excersizeamt(double mins) {
    if(mins >= 30) {
        cout << "Excersize Goal: Goal Met! \n";
        return true;
    } else {
        cout << "Excersize Goal: Goal Not Met! \n";
        return false;
    }
}

bool wateramt(double cups) {
    if(cups >= 8) {
        cout << "Water Goal: Goal Met! \n";
        return true;
    } else {
        cout << "Water Goal: Goal Not Met! \n";
        return false;
    }
}

bool hrslept(double hours) {
    if(hours >= 7) {
        cout << "Sleep Goal: Goal Met! \n";
        return true;
    } else {
        cout << "Sleep Goal: Goal Not Met! \n";
        return false;
    }
}

void healthsmry(double excersize, double watercups, double hourslept, string username) {
     cout << "---Summary Report--- \n";
     cout << "Your Name: " << username << "\n";
     excersizeamt(excersize);
     wateramt(watercups);
     hrslept(hourslept);
}

int main() {
    string name;
    cout << "What Is Your Name: "; "\n";
    cin >> name;
    
    double exrmin;
    cout << "Minutes Spent Exercising: "; "\n";
    cin >> exrmin;
    
    double water;
    cout << "Cups Of Water Drank: "; "\n";
    cin >> water;

    double sleep;
    cout << "Amount Of Hours Slept: "; "\n";
    cin >> sleep;
    
healthsmry(exrmin, water, sleep, name);
  
    return 0;
}
