#include <iostream>
#include <string>
#include <vector>

#include "Player.h"
#include "DCFunctions.h"
#include "Items.h"

using namespace std;

int main()
{
vector<Item> allItems = LoadItemsFromFile("Items.txt");//load items


vector<string> newCharacter = startUp();
int raceInt;
int classInt;
if (newCharacter[0] == "MAN"){
    raceInt = 1;
}else if (newCharacter[0] == "ELF"){
    raceInt = 2;
}else if (newCharacter[0] == "DWARF"){
    raceInt = 3;
} else{
    raceInt = 4;
}
if (newCharacter[1] == "FIGHTER"){
    classInt = 1;
} else if (newCharacter[1] == "MAGE"){
    classInt = 2;
} else if (newCharacter[1] == "RANGER"){
    classInt = 3;
} else {
    classInt = 4;
}
Player hero(raceInt, classInt, newCharacter[2]);
hero.PrintInfo();

hero.AddItem(allItems[0]);
hero.AddItem(allItems[1]);
hero.AddItem(allItems[2]);

hero.RemoveItem(2);

hero.ViewInventory();


}
