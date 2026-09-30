#include <iostream>
using namespace std;



int main() {
    //the \n makes a line break
    cout << "Personal info and number report\n";
//collect name stores for later
string name;
cout << "Enter your first name: ";
cin >> name; "\n";
//collects age input
int age;
cout << "Enter your age: ";
cin >> age; "\n";
//collects both number inputs 
int firstnumber;
cout << "Enter your favorite whole number: ";
cin >> firstnumber; "\n";
int secondnumber;
cout << "Enter a second whole number: ";
cin >> secondnumber;
//asks for decimal and stores value
double decimal;
cout << "Enter a decimal number: ";
cin >>  decimal; "\n";

cout << "---RETURN---\n";
//outputs name and age 
cout << "Name: " << name << "\n";
//the insertioon operator adds onto the string
cout << "Your current age is: " << age << "\n";
cout << "Your age next year is: " << age * 2 << "\n";
//the first inputed number is outputed and also multiplied by 2
cout << "Favorite Number: " << firstnumber << "\n";
cout << "Favorite Number Doubled: " << firstnumber * 2 << "\n";
cout << "Second Number Picked: " << secondnumber << "\n";
//EXTRA CREDIT
cout << "Sum of Both Numbers: " << firstnumber + secondnumber << "\n";
cout << "Product of Both Numbers: " << firstnumber * secondnumber << "\n";

cout << "Decimal Number: " << decimal << "\n";
cout << "Decimal Number Doubled: " << decimal * 2 << "\n";


return 0;
}
