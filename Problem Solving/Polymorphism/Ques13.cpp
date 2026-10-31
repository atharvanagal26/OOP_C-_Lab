#include <iostream>
#include <string>
using namespace std;
class Character {
protected:
    string name;
    int health;
public:
    Character(string charName, int hp) {
        name = charName;
        health = hp;
    }
    virtual void attack() {
        cout << name << " performs a basic generic attack.\n";
    }
    virtual ~Character() {
        cout << "Character " << name << " removed from memory.\n";
    }
};
class Warrior : public Character {
public:
    Warrior(string charName, int hp) : Character(charName, hp) {}
    void attack() override {
        cout << "[Warrior] " << name << " swings a mighty greatsword for heavy damage!\n";
    }
};
class Mage : public Character {
public:
    Mage(string charName, int hp) : Character(charName, hp) {}
    void attack() override {
        cout << "[Mage] " << name << " casts a devastating fireball spell!\n";
    }
};
int main() {
    Character* party[2];
    party[0] = new Warrior("Aragorn", 120);
    party[1] = new Mage("Gandalf", 80);
    cout << "    Executing Polymorphic Attacks via Base Pointers    \n";
    for (int i = 0; i < 2; i++) {
        party[i]->attack(); 
    }
    cout << "\n    Cleaning Up Dynamic Memory    \n";
    for (int i = 0; i < 2; i++) {
        delete party[i];
    }
    return 0;
}