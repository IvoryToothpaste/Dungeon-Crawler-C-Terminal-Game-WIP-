#include "Items.h"
#include <iostream>
using namespace std;


//Item Constructor
Item::Item(int id, string name, string type, string subType, string damageType, int minDamage, int maxDamage, int defense, string classRestriction){
    this->id = id;
    this->name = name;
    this->type = type;
    this->subType = subType;
    this->damageType = damageType;
    this->minDamage = minDamage;
    this->maxDamage = maxDamage;
    this->defense = defense;
    this->classRestriction = classRestriction;
}
Item::Item(){};
//
//}

//Getters
string Item::GetName(){
    return name;
}
string Item::GetType(){
    return type;
}
string Item::GetSubType(){
    return subType;
}
string Item::GetDamageType(){
    return damageType;
}
int Item::GetMinDamage(){
    return minDamage;
}
int Item::GetMaxDamage(){
    return maxDamage;
}
int Item::GetDefense(){
    return defense;
}
string Item::GetClassRestriction(){
    return classRestriction;
}
//Setters(Debug)
void Item::SetName(string name){
    this->name = name;
}
void Item::SetType(string type){
    this->type = type;
}
void Item::SetSubType(string subType){
    this->subType = subType;
}
void Item::SetDamageType(string damageType){
    this-> damageType = damageType;
}
void Item::SetMinDamage(int minDamage){
    this->minDamage = minDamage;
}
void Item::SetMaxDamage(int maxDamage){
    this->maxDamage = maxDamage;
}
void Item::SetDefense(int defense){
    this->defense = defense;
}
void Item::SetClassRestriction(string classRestriction){
    this->classRestriction = classRestriction;
}
//others
void Item::PrintInfo(){
    cout << "Item ID: " << id << endl;
    cout << "Item Name: " << name << endl;
    cout << "Item Type: " << type << endl;
    cout << "Item Sub-Type: " << subType << endl;
    cout << "Item Damage-Type: " << damageType << endl;
    cout << "Item Minimum Damage: " << minDamage << endl;
    cout << "Item Maximum Damage: " << maxDamage << endl;
    cout << "Item Defense: " << defense << endl;
    cout << "Item Class Restriction: " << classRestriction << endl;
    cout << endl;
}
