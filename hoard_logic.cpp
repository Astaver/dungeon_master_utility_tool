//
//  hoard_logic.cpp
//  dnd_console_tool
//
//  Created by Aaron Staver on 2/6/23.
//

#include <stdio.h>
#include "function_definitions.hpp"
#include <string>
#include <vector>
#include <iostream>

using namespace std;


void treasure_hoard_logic(vector<Hoard_Loot>& hoard_loot_4, vector<Hoard_Loot>& hoard_loot_10,vector<Hoard_Loot>& hoard_loot_16, vector<Hoard_Loot>& hoard_loot_17) {
    
    vector<string> items;
    int raiting, d100;
    srand(time(0));
    cout << "Please enter challange raiting: ";
    cin >> raiting;
    d100 = rand() % 100 + 1;
    hoard_handling(raiting, d100);
    //calculates money based on raiting
    money_calc(raiting);
    
   
    switch (raiting) {
        case 4:
            
            for (int i = 0; i < hoard_loot_4.size(); ++i)
            {
                //when adj == the key value
                if (hoard_loot_4[i].key_value == d100)
                {
                    //find if we need gems or art
                    string s = hoard_loot_4[i].descriptor;
                    if (s == " gems")
                    {
                        gem_table(hoard_loot_4[i].object_rolls, hoard_loot_4[i].type_to_roll);
                    }
                    else
                    {
                        art_table(hoard_loot_4[i].object_rolls, hoard_loot_4[i].type_to_roll);
                    }
                    
                    //pass respective values of the hoard_loot_n struct to magic_table_logic
                    magic_table_logic(items, hoard_loot_4[i].item_a.magic_rolls, hoard_loot_4[i].item_a.type_to_roll_2, hoard_loot_4[i].item_a.table, hoard_loot_4[i].item_b.magic_rolls_2, hoard_loot_4[i].item_b.type_to_roll_3, hoard_loot_4[i].item_b.table_2);

                  //  break;
                }
            }
            break;
        case 10:
     
            for (int i = 0; i < hoard_loot_10.size(); ++i) {
            
                if (hoard_loot_10[i].key_value == d100)
                {
                    string s = hoard_loot_10[i].descriptor;
                    if (s == " gems") {
                        gem_table(hoard_loot_10[i].object_rolls, hoard_loot_10[i].type_to_roll);
                    } else {
                        art_table(hoard_loot_10[i].object_rolls, hoard_loot_10[i].type_to_roll);
                    }
                    
                    magic_table_logic(items, hoard_loot_10[i].item_a.magic_rolls, hoard_loot_10[i].item_a.type_to_roll_2, hoard_loot_10[i].item_a.table, hoard_loot_10[i].item_b.magic_rolls_2, hoard_loot_10[i].item_b.type_to_roll_3, hoard_loot_10[i].item_b.table_2);

                    
                    break;
                }
            }
            break;
            
        case 16:
 
            for (int i = 0; i < hoard_loot_16.size(); ++i) {
            
                if (hoard_loot_16[i].key_value == d100)
                {
                    string s = hoard_loot_16[i].descriptor;
                    if (s == " gems") {
                        gem_table(hoard_loot_16[i].object_rolls, hoard_loot_16[i].type_to_roll);
                    } else {
                        art_table(hoard_loot_16[i].object_rolls, hoard_loot_16[i].type_to_roll);
                    }
                    
                    magic_table_logic(items, hoard_loot_16[i].item_a.magic_rolls, hoard_loot_16[i].item_a.type_to_roll_2, hoard_loot_16[i].item_a.table, hoard_loot_16[i].item_b.magic_rolls_2, hoard_loot_16[i].item_b.type_to_roll_3, hoard_loot_16[i].item_b.table_2);

                    
                    break;
                }
            }
            break;
            
        case 17:

            for (int i = 0; i < hoard_loot_16.size(); ++i) {
            
                if (hoard_loot_17[i].key_value == d100)
                {
                    string s = hoard_loot_17[i].descriptor;
                    if (s == " gems") {
                        gem_table(hoard_loot_17[i].object_rolls, hoard_loot_17[i].type_to_roll);
                    } else {
                        art_table(hoard_loot_17[i].object_rolls, hoard_loot_17[i].type_to_roll);
                    }
                    
                    magic_table_logic(items, hoard_loot_17[i].item_a.magic_rolls, hoard_loot_17[i].item_a.type_to_roll_2, hoard_loot_17[i].item_a.table, hoard_loot_17[i].item_b.magic_rolls_2, hoard_loot_17[i].item_b.type_to_roll_3, hoard_loot_17[i].item_b.table_2);

                    
                    break;
                }
            }
            break;
        }
}
