#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <string>
#include <vector>
#include "Items.h" // Player INVENTORY needs Items

using namespace std;

class Player {
private:
    string raceString;
    int raceInt;
    string classString;
    int classInt;
    string name;
    int strength;
    int intelligence;
    int dexterity;
    int level;
    int maxHealthPoints;
    int maxMagicPoints;
    int curHealthPoints;
    int curMagicPoints;
    int curXP;
    int maxXP; // XP points to next level
    int gold;
    bool alive;
    bool armorEquipped;
    bool weaponEquipped;

    vector<Item> inventory;
    Item equippedArmor;
    Item equippedWeapon;

public:
    Player(int race, int clas, string name); // player constructed once from main
    void TakeDirectDamage(int); //direct damage, not for calculating damage
    void CalcInDamage(int); //to calculate incoming damage, not for direct damage
    void CalcOutDamage(int); //to calculate outgoing damage
    void Heal(int); // for healing during battles;
    void Restore(); //fully heals
    void LevelUp();

    int GetRaceInt();
    string GetRaceString();
    int GetClassInt();
    string GetClassString();
    string GetName();
    int GetLevel();
    int GetStrength();
    int GetIntelligence();
    int GetDexterity();
    int GetMaxHP();
    int GetCurHP();
    int GetMaxMP();
    int GetCurMP();
    int GetMaxXP();
    int GetCurXP();
    int GetGold();

    void AddGold(int);
    void AddXP(int); //can also check if XP has reached maxXP to initiate LevelUp()

    //bools
    bool IsAlive();
    bool IsArmorEquipped();
    bool IsWeaponEquipped();

    //inventory WIP
    void AddItem(Item);
    void RemoveItem(int);

    void ViewInventory();



    //DEBUG
    void DisplayStats();
    void SetRaceInt(int);
    void SetRaceString(string);
    void SetClassInt(int);
    void SetClassString(string);
    void SetName(string);
    void SetLevel(int);
    void PrintInfo();


};


#endif // PLAYER_H_INCLUDED
