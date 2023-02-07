//
//  function_definitions.hpp
//  dnd_console_tool
//
//  Created by Aaron Staver on 2/4/23.
//

#ifndef function_definitions_hpp
#define function_definitions_hpp

#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

struct Magic_Item_A
{
    int magic_rolls = 0;
    int type_to_roll_2 = 0;
    char table = '/';
};

struct Magic_Item_B
{
    int magic_rolls_2 = 0;
    int type_to_roll_3 = 0;
    char table_2 = '/';
};


struct Hoard_Loot
{
    int key_value;
    int object_rolls = 0;
    int type_to_roll = 0;
    int value_of_object = 0;
    string descriptor = "/";
    Magic_Item_A item_a;
    Magic_Item_B item_b;
};

void display_menu();
void dice_roll();
void loot_roll(vector<Hoard_Loot>&, vector<Hoard_Loot>&, vector<Hoard_Loot>&, vector<Hoard_Loot>&);
void individual_challange();
void treasure_hoard_logic(vector<Hoard_Loot>& hoard_loot_4, vector<Hoard_Loot>& hoard_loot_10,vector<Hoard_Loot>& hoard_loot_16, vector<Hoard_Loot>& hoard_loot_17);


vector<Hoard_Loot> load_loot_variables(vector<Hoard_Loot>& hoard_loot_4, vector<Hoard_Loot>& hoard_loot_10, vector<Hoard_Loot>& hoard_loot_16, vector<Hoard_Loot>& hoard_loot_17);


void gem_table(int, int);
void art_table(int value_table, int roll);
int money_calc(int raiting);
void magic_table_logic(vector<string> items, int, int, char, int, int, char);




#endif /* function_definitions_hpp */
