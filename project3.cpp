#include <iostream>
using namespace std;



int main() {
    cout << "Personal info and number report\n";

string name;
cout << "Enter your first name: ";
cin >> name; "\n";
int age;
cout << "Enter your age: ";
cin >> age; "\n";
int number;
cout << "Enter your favorite whole number: ";
cin >> number; "\n";
double decimal;
cout << "Enter a decimal number: ";
cin >>  decimal; "\n";

cout << "---RETURN---\n";

cout << "Name: " << name << "\n";
cout << "Your current age is: " << age << "\n";
cout << "Your age next year is: " << age * 2 << "\n";

cout << "Favorite Number: " << number << "\n";
cout << "Favorite Number Doubled: " << number * 2 << "\n";

cout << "Decimal Number: " << decimal << "\n";
cout << "Decimal Number Doubled: " << decimal * 2 << "\n";


return 0; 
}
