#include "DCFunctions.h"
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

vector<string> startUp(){
cout << " ____  _____ _____ _____ _____ _____ _____ " << endl;
cout << "|    \\|  |  |   | |   __|   __|     |   | |" << endl;
cout << "|  |  |  |  | | | |  |  |   __|  |  | | | |" << endl;
cout << "|____/|_____|_|___|_____|_____|_____|_|___|" << endl;
cout << " _____ _____ _____ _ _ _ __    _____ _____ " << endl;
cout << "|     | __  |  _  | | | |  |  |   __| __  |" << endl;
cout << "|   --|    -|     | | | |  |__|   __|    -|" << endl;
cout << "|_____|__|__|__|__|_____|_____|_____|__|__|" << endl;
cout << "Made by Zachary :)" << endl << endl;

vector<string> theGuy;
int raceInt;
string raceName;

cout << "Hello Dungeoneer! Please tell me about yourself!\n"
     << "** RACES **\n"
     << " 1. MAN\n"
     << " 2. ELF\n"
     << " 3. DWARF\n"
     << " 4. ORC\n\n"
     << "Please Enter Your Race: ";

while (!(cin >> raceInt) || raceInt < 1 || raceInt > 4) { // Check input validity
    cin.clear(); // Clears error flag
    cin.ignore(10000, '\n'); // Discards invalid input
    cout << "Please enter a number between 1 and 4: ";
    cin >> raceInt;
}

if (raceInt == 1){
    raceName = "MAN";
}else if (raceInt == 2){
    raceName = "ELF";
}else if (raceInt == 3){
    raceName = "DWARF";
}else if (raceInt == 4) {
    raceName = "ORC";
}

cout << "\nYou've selected: " << raceName << "\n\n";


// Class Selection
int classInt;
string className;

cout << "Well met my friendly " << raceName << "! Now what discipline do you follow?\n\n"
     << "**CLASSES**\n"
     << " 1. FIGHTER\n"
     << " 2. MAGE\n"
     << " 3. RANGER\n"
     << " 4. CLERIC\n\n"
     << "Please Enter Your Class: ";

while (!(cin >> classInt) || raceInt < 1 || raceInt > 4) {
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Please enter a number between 1 and 4: ";
}

if (classInt == 1){
    className = "FIGHTER";
}else if (classInt == 2){
    className = "MAGE";
}else if (classInt == 3) {
    className = "RANGER";
}else if (classInt == 4) {
    className = "CLERIC";
}


cout << "\nAhhh I see! So you're a " << raceName << " " << className << "! Very interesting!\n\n";

string userName;
cout << "Now! Brave adventurer, wont you please tell me your name?\n\n"
     << "Please enter your name:";

cin.ignore(10000, '\n');
getline(cin, userName);
for (char &c : userName){
    c = toupper(c);
}
// Game Start
char YesNo;
cout << "\nWELCOME " << userName <<" THE " << raceName << " " << className << "! Are you ready to start your adventure?\n" << "Y/N:";
while (true){
    cin >> YesNo;
    if (YesNo == 'n' || YesNo == 'N'){
        cout << "BYE!";
        exit(0);
    }else if (YesNo == 'y' || YesNo == 'Y'){
        cout << "Fantastic!\n";
        break;
    }else {
        cout << "\nPlease Input Y/N: ";
    }
}
theGuy.push_back(raceName);
theGuy.push_back(className);
theGuy.push_back(userName);
return theGuy;
}
void loveEmilie(){

cout << ".___  .____    ____________   _______________       " << endl;
cout << "|   | |    |   \\_____  \\   \\ /   /\\_   _____/       " << endl;
cout << "|   | |    |    /   |   \\   Y   /  |    __)_        " << endl;
cout << "|   | |    |___/    |    \\     /   |        \\       " << endl;
cout << "|___| |_______ \\_______  /\\___/   /_______  /       " << endl;
cout << "              \\/       \\/                 \\/        " << endl;
cout << "___________   _____  .___.____    .______________._." << endl;
cout << "\\_   _____/  /     \\ |   |    |   |   \\_   _____/| |" << endl;
cout << " |    __)_  /  \\ /  \\|   |    |   |   ||    __)_ | |" << endl;
cout << " |        \\/    Y    \\   |    |___|   ||        \\ \\|" << endl;
cout << "/_______  /\\____|__  /___|_______ \\___/_______  / __" << endl;
cout << "        \\/         \\/            \\/           \\/  \\/" << endl;
}
vector<Item> LoadItemsFromFile(string filename) {
    vector<Item> items;
    ifstream file(filename);

    if (!file.is_open()) {
        cout << "Error: Could not open file " << filename << endl;
        return items;
    }

    string line;
    getline(file, line); // Skip the first header line

    while (getline(file, line)) {
        stringstream ss(line);
        string idStr, name, type, subType, damageType, minDamageStr, maxDamageStr, defenseStr, classRestriction;

        // Parse using delimiter |
        getline(ss, idStr, '|');
        getline(ss, name, '|');
        getline(ss, type, '|');
        getline(ss, subType, '|');
        getline(ss, damageType, '|');
        getline(ss, minDamageStr, '|');
        getline(ss, maxDamageStr, '|');
        getline(ss, defenseStr, '|');
        getline(ss, classRestriction, '|');

        // Convert number fields
        int id = stoi(idStr);
        int minDamage = stoi(minDamageStr);
        int maxDamage = stoi(maxDamageStr);
        int defense = stoi(defenseStr);

        // Create Item and add to vector
        Item newItem(id, name, type, subType, damageType, minDamage, maxDamage, defense, classRestriction);
        items.push_back(newItem);
    }

    file.close();
    return items;
}
