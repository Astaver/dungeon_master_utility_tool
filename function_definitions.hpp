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



class Dice_Variable {
private:
    int key_value = 0;
    int to_roll = 0;
    int type = 0;
    int modifier = 0;
    string text = "";
    int to_roll_2 = 0;
    int type_2 = 0;
    int modifier_2 = 0;
    string text_2 = "";
public:
    void set_int_values(int, int, int, int, int, int, int);
    int get_int_values() const;
    void set_string_values(string, string);
    string get_string_values() const;
    void set_key_value(int key_value);
    int get_key_value() const;
    void set_to_roll(int to_roll);
    int get_to_roll() const;
    void set_type(int type);
    int get_type() const;
    void set_modifier(int modifier);
    int get_modifier() const;
    void set_text(string text);
    string get_text() const;
    void set_to_roll_2(int to_roll_2);
    int get_to_roll_2() const;
    void set_type_2(int type_2);
    int get_type_2() const;
    void set_modifier_2(int modifier_2);
    int get_modifier_2() const;
    void set_text_2(string text_2);
    string get_text_2() const;
};




void display_menu();
void dice_roll();
void loot_roll(vector<Hoard_Loot>&, vector<Hoard_Loot>&, vector<Hoard_Loot>&, vector<Hoard_Loot>&);
void individual_challange();
void treasure_hoard_logic(vector<Hoard_Loot>& hoard_loot_4, vector<Hoard_Loot>& hoard_loot_10,vector<Hoard_Loot>& hoard_loot_16, vector<Hoard_Loot>& hoard_loot_17);


vector<Hoard_Loot> load_loot_variables(vector<Hoard_Loot>& hoard_loot_4, vector<Hoard_Loot>& hoard_loot_10, vector<Hoard_Loot>& hoard_loot_16, vector<Hoard_Loot>& hoard_loot_17);

vector<Dice_Variable> load_dice_variables(vector<Dice_Variable>& var_4,vector<Dice_Variable>&   var_10, vector<Dice_Variable>&  var_16, vector<Dice_Variable>&  var_17);


void gem_table(int, int);
void art_table(int value_table, int roll);
int money_calc(int raiting);
void magic_table_logic(vector<string> items, int, int, char, int, int, char);

int range_handling(int &raiting, int &d100);
int hoard_handling(int& raiting, int& d100);

#endif /* function_definitions_hpp */
