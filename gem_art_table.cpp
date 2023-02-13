//
//  gem_art_table.cpp
//  dnd_console_tool
//
//  Created by Aaron Staver on 2/9/23.
//

#include <stdio.h>
#include "function_definitions.hpp"
#include <iostream>


//calculates gem gold piece value based on which gem_value is passed.
void gem_table(int gem_value,int gem_dice_to_roll)
{
    srand(time_t(0));
    int gem_total = 0;
    string gem_string = " gp value of gems.";
   
    if (gem_value == 10) {
        gem_total = gem_dice_to_roll * 10;
        cout << gem_total << gem_string<< endl;
        //hoard_loot.gem_object = gem_total;
    } else if (gem_value == 50) {
        gem_total = gem_dice_to_roll * 50;
        cout << gem_total << gem_string<< endl;
    } else if (gem_value == 500) {
        gem_total = gem_dice_to_roll * 500;
        cout << gem_total << gem_string<< endl;
    } else if (gem_value == 1000) {
        gem_total = gem_dice_to_roll * 1000;
        cout << gem_total << gem_string<< endl;
    } else {
        gem_total = gem_dice_to_roll * 5000;
        cout << gem_total << gem_string<< endl;
    }
    
}

//calculates art gold piece value based on which gem_value is passed.
void art_table(int art_value, int art_dice_to_roll)
{
    srand(time(0));
    int art_total = 0;
    string art_gp_value_string = " gp value of art.";
    

    if (art_value == 25){
        art_total = art_dice_to_roll * 25;
        cout << art_total << art_gp_value_string << endl;
    } else if (art_value == 250) {
        art_total = art_dice_to_roll * 250;
        cout << art_total << art_gp_value_string << endl;
    } else if (art_value == 750) {
        art_total =  art_dice_to_roll * 750;
        cout << art_total << art_gp_value_string << endl;
    } else if (art_value == 2500) {
        art_total = art_dice_to_roll * 2500;
        cout << art_total << art_gp_value_string << endl;
    } else {
        art_total = art_dice_to_roll * 7500;
        cout << art_total << art_gp_value_string << endl;
    }
    
}
