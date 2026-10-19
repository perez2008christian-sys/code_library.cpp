#include <iostream>
#include <string>
using namespace std;

int main() {
    string size;
    int magiclvl;
    int horns;
    int hostile;
    
    cout << "Welcome To The Fantazy Creature Classifier \n";
    
    cout << "Enter The Size (small, medium, large): "; "\n";
    cin >> size;
    
    cout << "What Is The Magic Level: "; "\n";
    cin >> magiclvl;
    
    cout << "How Many Horns Does It Have: "; "\n";
    cin >> horns;
    
    cout << "Is The Creature Hostile (1 for yes 0 for no): "; "\n";
    cin >> hostile;
    
    if (size == "large" and magiclvl >=8) {
        if (horns == 2 and hostile == 1) {
            cout <<"That Is A Dragon!";
        } else {
            cout << "You Have Found A Phoenix! Good Find!";
        }
    }
    else if (size == "medium" and magiclvl == 6) {
        if (horns == 1 and hostile == 0) {
            cout << "You Have Stumbled Accross A Unicorn.";
        } else {
            cout << "Thats A Hoop Snake";
        }
    }
    else if (size == "small" and magiclvl <= 2) {
        if (horns == 0 and hostile == 0) {
            cout << "That Is A Fairy";
        }
        else {
            cout << "Thats A Gremlin";
        }
    }
    else if (size == "large" and magiclvl <=7) {
        if (hostile == 0) {
        cout << "That Is The ThunderBird";
        } 
        else {
            cout << "Mystery Creature";
        }
    }
    else if (size == "medium" and magiclvl < 6) {
        if (hostile == 1) {
        cout << "That Is A Chimera";
        }
        else {
            cout << "Mystery Creature";
        }
    }
    else if (size == "small" and magiclvl <= 6) {
        if (hostile == 1) {
        cout << "That Is A Basilisk";
        }
        else {
            "Mystery Creature";
        }
    }
    return 0;
}
