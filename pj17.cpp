#include <iostream>
using namespace std;

class gameCharacter{
    public:
    string name;
    string characterClass;
    int health;
    int level;
    
    void custom(){
        cout << "Name: ";
        cin >> name;
        
        cout << "Class: ";
        cin >> characterClass;
        
        cout << "Health: ";
        cin >> health;
        
        cout << "Level: ";
        cin >> level;
    }
    
    void displayInfo(){
        cout << "---YOUR CHARACTER---\n";
        cout << "Name: " << name << "\n";
        cout << "Class: " << characterClass << "\n";
        cout << "Health: " << health << "\n";
        cout << "Level: " << level << "\n";
    }
    
    void levelUp(){
        level += 1;
        cout << "You Have Leveled Up!! \n";
        cout << "New Level: " << level << "\n";
    }
    
};

int main(){
    cout << "---Character 1---\n";
    gameCharacter class1;
    class1.custom();
    class1.displayInfo();
    class1.levelUp();
    
     cout << "---Character 2---\n";
    gameCharacter class2;
    class2.custom();
    class2.displayInfo();
    class2.levelUp();
    
    return 0;
}
