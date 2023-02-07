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
    int raiting, x = 0, adj=0, d100;
    srand(time(0));
    cout << "Please enter challange raiting: ";
    cin >> raiting;
    money_calc(raiting);
    
    if (raiting >= 1 && raiting <= 4) { x = 4;}
    if (raiting >= 5 && raiting <= 10) {x = 10;}
    if (raiting >= 11 && raiting <= 16) {x = 16;}
    if (raiting >= 17 && raiting <= 20) {x = 17;}
    
    switch (x) {
        case 4:
            d100 = rand() % 100 + 1;
            if      (d100 >= 1 && d100 <= 6) {adj = 6;}
            else if (d100 >= 7 && d100 <= 16) {adj = 16;}
            else if (d100 >= 17 && d100 <= 26) {adj = 26;}
            else if (d100 >= 27 && d100 <= 36) {adj = 36;}
            else if (d100 >= 37 && d100 <= 44) {adj = 44;}
            else if (d100 >= 45 && d100 <= 52) {adj = 52;}
            else if (d100 >= 53 && d100 <= 60) {adj = 60;}
            else if (d100 >= 61 && d100 <= 65) {adj = 65;}
            else if (d100 >= 66 && d100 <= 70) {adj = 70;}
            else if (d100 >= 71 && d100 <= 75) {adj = 75;}
            else if (d100 >= 76 && d100 <= 78) {adj = 78;}
            else if (d100 >= 79 && d100 <= 80) {adj = 80;}
            else if (d100 >= 81 && d100 <= 85) {adj = 85;}
            else if (d100 >= 86 && d100 <= 92) {adj = 92;}
            else if (d100 >= 93 && d100 <= 97) {adj = 97;}
            else if (d100 >= 98 && d100 <= 99) {adj = 99;}
            else {adj = 100;}
            
            for (int i = 0; i < hoard_loot_4.size(); ++i)
            {
            
                if (hoard_loot_4[i].key_value == adj)
                {
                    string s = hoard_loot_4[i].descriptor;
                    if (s == " gems")
                    {
                        gem_table(hoard_loot_4[i].object_rolls, hoard_loot_4[i].type_to_roll);
                    }
                    else
                    {
                        art_table(hoard_loot_4[i].object_rolls, hoard_loot_4[i].type_to_roll);
                    }
                    
                    magic_table_logic(items, hoard_loot_4[i].item_a.magic_rolls, hoard_loot_4[i].item_a.type_to_roll_2, hoard_loot_4[i].item_a.table, hoard_loot_4[i].item_b.magic_rolls_2, hoard_loot_4[i].item_b.type_to_roll_3, hoard_loot_4[i].item_b.table_2);

                  //  break;
                }
            }
            break;
        case 10:
            d100 = rand() % 100 + 1;
            if      (d100 >= 1 && d100 <= 4) {adj = 4;}
            else if (d100 >= 5 && d100 <= 10) {adj = 10;}
            else if (d100 >= 11 && d100 <= 16) {adj = 16;}
            else if (d100 >= 17 && d100 <= 22) {adj = 22;}
            else if (d100 >= 23 && d100 <= 28) {adj = 28;}
            else if (d100 >= 29 && d100 <= 32) {adj = 32;}
            else if (d100 >= 33 && d100 <= 36) {adj = 36;}
            else if (d100 >= 37 && d100 <= 40) {adj = 40;}
            else if (d100 >= 41 && d100 <= 44) {adj = 44;}
            else if (d100 >= 45 && d100 <= 49) {adj = 49;}
            else if (d100 >= 50 && d100 <= 54) {adj = 54;}
            else if (d100 >= 55 && d100 <= 59) {adj = 59;}
            else if (d100 >= 60 && d100 <= 63) {adj = 63;}
            else if (d100 >= 64 && d100 <= 66) {adj = 66;}
            else if (d100 >= 67 && d100 <= 69) {adj = 69;}
            else if (d100 >= 70 && d100 <= 72) {adj = 72;}
            else if (d100 >= 73 && d100 <= 74) {adj = 74;}
            else if (d100 >= 75 && d100 <= 76) {adj = 76;}
            else if (d100 >= 77 && d100 <= 78) {adj = 78;}
            else if (d100 == 79) {adj = 79;}
            else if (d100 == 80) {adj = 80;}
            else if (d100 >= 81 && d100 <= 84) {adj = 84;}
            else if (d100 >= 85 && d100 <= 88) {adj = 88;}
            else if (d100 >= 89 && d100 <= 91) {adj = 91;}
            else if (d100 >= 92 && d100 <= 94) {adj = 94;}
            else if (d100 >= 95 && d100 <= 96) {adj = 96;}
            else if (d100 >= 97 && d100 <= 98) {adj = 98;}
            else if (d100 == 99) {adj = 99;}
            else    {adj = 100;}

            for (int i = 0; i < hoard_loot_10.size(); ++i) {
            
                if (hoard_loot_10[i].key_value == adj)
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
            d100 = rand() % 100 + 1;
            if      (d100 >= 1 && d100 <= 3) {adj = 3;}
            else if (d100 >= 4 && d100 <= 6) {adj = 6;}
            else if (d100 >= 7 && d100 <= 10) {adj = 10;}
            else if (d100 >= 11 && d100 <= 12) {adj = 12;}
            else if (d100 >= 13 && d100 <= 15) {adj = 15;}
            else if (d100 >= 16 && d100 <= 19) {adj = 19;}
            else if (d100 >= 20 && d100 <= 23) {adj = 23;}
            else if (d100 >= 24 && d100 <= 26) {adj = 26;}
            else if (d100 >= 27 && d100 <= 29) {adj = 29;}
            else if (d100 >= 30 && d100 <= 35) {adj = 35;}
            else if (d100 >= 36 && d100 <= 40) {adj = 40;}
            else if (d100 >= 41 && d100 <= 45) {adj = 45;}
            else if (d100 >= 46 && d100 <= 50) {adj = 50;}
            else if (d100 >= 51 && d100 <= 54) {adj = 54;}
            else if (d100 >= 55 && d100 <= 58) {adj = 58;}
            else if (d100 >= 59 && d100 <= 62) {adj = 62;}
            else if (d100 >= 63 && d100 <= 66) {adj = 66;}
            else if (d100 >= 67 && d100 <= 68) {adj = 68;}
            else if (d100 >= 69 && d100 <= 70) {adj = 70;}
            else if (d100 >= 71 && d100 <= 72) {adj = 72;}
            else if (d100 >= 73 && d100 <= 74) {adj = 74;}
            else if (d100 >= 75 && d100 <= 76) {adj = 76;}
            else if (d100 >= 77 && d100 <= 78) {adj = 78;}
            else if (d100 >= 79 && d100 <= 80) {adj = 80;}
            else if (d100 >= 81 && d100 <= 82) {adj = 82;}
            else if (d100 >= 83 && d100 <= 85) {adj = 85;}
            else if (d100 >= 86 && d100 <= 88) {adj = 88;}
            else if (d100 >= 89 && d100 <= 90) {adj = 90;}
            else if (d100 >= 91 && d100 <= 92) {adj = 92;}
            else if (d100 >= 93 && d100 <= 94) {adj = 94;}
            else if (d100 >= 95 && d100 <= 96) {adj = 96;}
            else if (d100 >= 97 && d100 <= 98) {adj = 98;}
            else if (d100 >= 99 && d100 <= 100) {adj = 100;}

            for (int i = 0; i < hoard_loot_16.size(); ++i) {
            
                if (hoard_loot_16[i].key_value == adj)
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
            d100 = rand() % 100 + 1;
            
            if      (d100 >= 1 && d100 <= 2) {adj = 2;}
            else if (d100 >= 3 && d100 <= 5) {adj = 5;}
            else if (d100 >= 6 && d100 <= 8) {adj = 8;}
            else if (d100 >= 9 && d100 <= 11) {adj = 11;}
            else if (d100 >= 12 && d100 <= 14) {adj = 14;}
            else if (d100 >= 15 && d100 <= 22) {adj = 22;}
            else if (d100 >= 23 && d100 <= 30) {adj = 30;}
            else if (d100 >= 31 && d100 <= 38) {adj = 38;}
            else if (d100 >= 39 && d100 <= 46) {adj = 46;}
            else if (d100 >= 47 && d100 <= 52) {adj = 52;}
            else if (d100 >= 53 && d100 <= 58) {adj = 58;}
            else if (d100 >= 59 && d100 <= 63) {adj = 63;}
            else if (d100 >= 64 && d100 <= 68) {adj = 68;}
            else if (d100 == 69) {adj = 69;}
            else if (d100 == 70) {adj = 70;}
            else if (d100 == 71) {adj = 71;}
            else if (d100 == 72) {adj = 72;}
            else if (d100 >= 73 && d100 <= 74) {adj = 74;}
            else if (d100 >= 75 && d100 <= 76) {adj = 76;}
            else if (d100 >= 77 && d100 <= 78) {adj = 78;}
            else if (d100 >= 79 && d100 <= 80) {adj = 80;}
            else if (d100 >= 81 && d100 <= 85) {adj = 85;}
            else if (d100 >= 86 && d100 <= 90) {adj = 90;}
            else if (d100 >= 91 && d100 <= 95) {adj = 95;}
            else if (d100 >= 96 && d100 <= 100) {adj = 100;}
            
            for (int i = 0; i < hoard_loot_16.size(); ++i) {
            
                if (hoard_loot_17[i].key_value == adj)
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
