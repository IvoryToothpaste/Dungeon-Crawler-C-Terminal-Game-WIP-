#ifndef DCFUNCTIONS_H_INCLUDED
#define DCFUNCTIONS_H_INCLUDED

#include <string>
#include <vector>
#include "Items.h" // if DCFunctions uses Items (like LoadItemsFromFile)

using namespace std;


vector<string> startUp();
void loveEmilie();
vector<Item> LoadItemsFromFile(string);

#endif // DCFUNCTIONS_H_INCLUDED
