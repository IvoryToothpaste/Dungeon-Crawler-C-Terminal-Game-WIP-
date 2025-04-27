#include "Player.h"
#include <iostream> // for cout
using namespace std;

//PLAYER CONSTRUCTOR
Player::Player(int race, int clas, string name){
    //race
    if       (race == 1){
        raceString = "MAN";
        raceInt = 1;
    } else if (race == 2){
        raceString = "ELF";
        raceInt = 2;
    } else if (race == 3){
        raceString = "DWARF";
        raceInt = 3;
    } else if (race == 4){
        raceString = "ORC";
        raceInt = 4;
    }

//class (clas)
    if        (clas == 1){
        classString = "FIGHTER";
        classInt = 1;
    } else if (clas == 2){
        classString = "MAGE";
        classInt = 2;
    } else if (clas == 3){
        classString = "RANGER";
        classInt = 3;
    } else if (clas == 4){
        classString = "CLERIC";
        classInt = 4;
    }

//Name
    this->name = name;

//Initial Stats, Level, XP, Gold, HP and MP
    level = 1;
    curXP = 0;
    maxXP = 100;
    gold = 0;

    strength = 5;
    intelligence = 5;
    dexterity = 5;

//Race Stat Calc
    if        (raceInt == 1){ //MAN
        strength = strength + 2;
        intelligence = intelligence + 1;
        dexterity = dexterity + 1;
    } else if (raceInt == 2){ //ELF
        strength = strength - 1;
        intelligence = intelligence + 3;
        dexterity = dexterity + 2;
    } else if (raceInt == 3){ //DWARF
        strength = strength + 3;
        intelligence = intelligence + 2;
        dexterity = dexterity - 2;
    } else if (raceInt == 4){ //ORC
        strength = strength + 5;
        intelligence = intelligence -2;
        dexterity = dexterity + 1;
    }

//Class Stat Calc
    if (classInt == 1){ //FIGHTER
        strength = strength + 2;
        dexterity = dexterity + 1;
    } else if (classInt == 2){//MAGE
        intelligence = intelligence + 3;
    } else if (classInt == 3){//RANGER
        strength = strength + 1;
        dexterity = dexterity + 2;
    } else if (classInt == 4){//CLERIC
        strength = strength + 1;
        intelligence = intelligence + 2;
    }

//HP and MP
    maxHealthPoints = strength * 2;
    maxMagicPoints = intelligence * 2;
    curHealthPoints = maxHealthPoints;
    curMagicPoints = maxMagicPoints;


}

//Getters
int Player::GetRaceInt(){
        return raceInt;
    }
string Player::GetRaceString(){
        return raceString;
    }
int Player::GetClassInt(){
        return classInt;
    }
string Player::GetClassString(){
        return classString;
    }
string Player::GetName(){
        return name;
    }
int Player::GetLevel(){
        return level;
    }
int Player::GetStrength(){
        return strength;
    }
int Player::GetIntelligence(){
    return intelligence;
        }
int Player::GetDexterity(){
        return dexterity;
    }
int Player::GetMaxHP(){
        return maxHealthPoints;
    }
int Player::GetCurHP(){
        return curHealthPoints;
    }
int Player::GetMaxMP(){
        return maxMagicPoints;
    }
int Player::GetCurMP(){
        return curMagicPoints;
    }
int Player::GetMaxXP(){
        return maxXP;
    }
int Player::GetCurXP(){
        return curXP;
    }
int Player::GetGold(){
        return gold;
    }

//Bools
bool Player::IsAlive(){
    if (curHealthPoints <= 0){
        alive = false;
        return false;
    } else {
        alive = true;
        return true;
    }
}
bool Player::IsArmorEquipped(){
    return armorEquipped;
}
bool Player::IsWeaponEquipped(){
    return weaponEquipped;
}

//Inventory
void Player::AddItem(Item item){
    inventory.push_back(item);
}
void Player::RemoveItem(int i){
    if (i > 0 && i <= inventory.size()){
        inventory.erase(inventory.begin() + i-1); //user input is input as i, which will index inventory w/o 0
    } else {
        cout << "Invalid item selection!" << endl;
    }
}

void Player::ViewInventory(){
    cout << "PLAYER INVENTORY:" << endl;
    for (int i = 0; i < inventory.size(); i++){
        cout << i+1 << ". " << inventory[i].GetName() << endl;
    }
    cout << endl;
}

//WIP
/*

    void TakeDirectDamage(int); //direct damage, not for calculating damage
    void CalcInDamage(int); //to calculate incoming damage, not for direct damage
    void CalcOutDamage(int); //to calculate outgoing damage
    void Heal(int); // for healing during battles;
    void Restore(); //fully heals
    void LevelUp();

    void AddGold(int);
    void AddXP(int); //can also check if XP has reached maxXP to initiate LevelUp()

    bool IsAlive();

    //DEBUG
    void DisplayStats();
    void SetRaceInt(int);
    void SetRaceString(string);
    void SetClassInt(int);
    void SetClassString(string);
    void SetName(string);
    void SetLevel(int);

*/
//DEBUG
    void Player::PrintInfo(){
    cout << "PLAYER INFO: " << endl;
    cout << "Race Name: " << raceString << endl;
    cout << "Race ID: " << raceInt << endl;
    cout << "Class Name: " << classString << endl;
    cout << "Class ID: " << classInt << endl;
    cout << "Player Name: " << name << endl;
    cout << "STR: " << strength << endl;
    cout << "INT: " << intelligence << endl;
    cout << "DEX: " << dexterity << endl;
    cout << "LVL: " << level << endl;
    cout << "MAX HP: " << maxHealthPoints << endl;
    cout << "CUR HP: " <<curHealthPoints << endl;
    cout << "MAX MP: " << maxMagicPoints << endl;
    cout << "CUR MP: " <<curMagicPoints << endl;
    cout << "MAX XP: " << maxXP << endl;
    cout << "CUR XP: " << curXP << endl;
    cout << "Gold: " << gold << endl;
    cout << endl;
    }
