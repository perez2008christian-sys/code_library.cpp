#include <iostream>
using namespace std;

int main() {
    double score1, score2, score3; //semicolon, changed data type to double 
    double average;

    cout << "Enter score 1: ";
    cin >> score1;

    cout << "Enter score 2: ";
    cin >> score2;

    cout << "Enter score 3: ";
    cin >> score3;

    average = ((score1 + score2 + score3) / 3); //added parenthesis to fix order of operations

    cout << "Average score: " << average << "\n";

    if (average >= 90){
        cout << "Letter grade: A" << "\n";
    }
    else if (average >= 80){
        cout << "Letter grade: B" << "\n";
    }
    else if (average >= 70){
        cout << "Letter grade: C" << "\n";
    }
    else if (average >= 60){
        cout << "Letter grade: D" << "\n";
    }
    else {
        cout << "Letter grade: F" << "\n"; //semicolon, curly braces all along if statement
    }

    return 0;
}
