#include <iostream>
using namespace std;

class student{
    private:
    string name;
    string major;
    double grade;
    
    public:
    student(string n, string m, double g){
        name = n;
        major = m;
        grade = g;
    }
    
    void displayInfo(){
        cout << "Name: " << name << "\n";
        cout << "Major: " << major << "\n";
        cout << "Grade: " << grade << "\n";
    }
    
    void gradeCheck(){
        if(grade >= 70){
            cout << "Passing! \n";
        } else{
            cout << "Not Passing:(\n";
        }
    }
    
};

int main(){
    student Timmy("Timmy", "Math", 58);
    Timmy.displayInfo();
    Timmy.gradeCheck();
    
    student Turner("Turner", "Comp Sci", 80);
    Turner.displayInfo();
    Turner.gradeCheck();
    
    return 0;
}
