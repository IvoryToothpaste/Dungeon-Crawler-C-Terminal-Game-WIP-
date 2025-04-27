#ifndef ITEMS_H_INCLUDED
#define ITEMS_H_INCLUDED

#include <string>
using namespace std;

class Item{
private:
    int id;
    string name;
    string type;
    string subType;
    string damageType;
    int minDamage;
    int maxDamage;
    int defense;
    string classRestriction;

public:
    //constructor
    Item(int id, string name, string type, string subType, string damageType, int minDamage, int maxDamage, int defense, string classRestriction);
    Item(); //idk its making something work
    //getters
    string GetName();
    string GetType();
    string GetSubType();
    string GetDamageType();
    int GetMinDamage();
    int GetMaxDamage();
    int GetDefense();
    string GetClassRestriction();

    //debug setters
    void SetName(string);
    void SetType(string);
    void SetSubType(string);
    void SetDamageType(string);
    void SetMinDamage(int);
    void SetMaxDamage(int);
    void SetDefense(int);
    void SetClassRestriction(string);

    //others
    void PrintInfo();
};


#endif // ITEMS_H_INCLUDED
