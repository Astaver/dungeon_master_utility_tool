//
//  individual_challange.cpp
//  dnd_console_tool
//
//  Created by Aaron Staver on 1/23/23.
//

#include "function_definitions.hpp"
#include <iostream>
#include <map>
#include <vector>


using namespace std;


struct X_Dice_Var
{
    int to_roll_2 = 0;
    int type_2 = 0;
    int modifier_2 = 0;
    string text_2 = "";
};


struct Dice_Variable
{
    int key_value = 0;
    int to_roll = 0;
    int type = 0;
    int modifier = 0;
    string text = "";
    X_Dice_Var x_dice_var;
};
    
vector<Dice_Variable> load_dice_variables(vector<Dice_Variable>& var_4,vector<Dice_Variable>&   var_10, vector<Dice_Variable>&  var_16, vector<Dice_Variable>&  var_17)
{
    Dice_Variable i_chal_4_30 = {30, 5, 6, 0, " copper"};
   // Dice_Variable i_chal_4_30 = {30, 5, 6, 0, " copper"};
    
    
    Dice_Variable i_chal_4_60 = {60, 4, 6, 0, " silver"};
    Dice_Variable i_chal_4_70 = {70, 3, 6, 0, " electrum"};
    Dice_Variable i_chal_4_95 = {95, 3, 6, 0, " gold"};
    Dice_Variable i_chal_4_100 = {100, 1, 6, 0, " platinum"};
    
    var_4.push_back(i_chal_4_30);
    var_4.push_back(i_chal_4_60);
    var_4.push_back(i_chal_4_70);
    var_4.push_back(i_chal_4_95);
    var_4.push_back(i_chal_4_100);
    
    Dice_Variable i_chal_10_30 = {30, 4, 6, 100, " copper", 1, 6, 10, " electrum"};
    Dice_Variable i_chal_10_60 = {60, 6, 6, 10, " silver" , 2, 6, 10, " gold"};
    Dice_Variable i_chal_10_70 = {70, 1, 6, 100, " electrum", 2, 6, 10, " gold"};
    Dice_Variable i_chal_10_95 = {95, 4, 6, 10, " gold"};
    Dice_Variable i_chal_10_100 = {100, 2, 6, 10, " gold", 3, 6, 0, " platinum"};
    
    var_10.push_back(i_chal_10_30);
    var_10.push_back(i_chal_10_60);
    var_10.push_back(i_chal_10_70);
    var_10.push_back(i_chal_10_95);
    var_10.push_back(i_chal_10_100);
    
    Dice_Variable i_chal_16_20 = {20, 4, 6, 100, " silver", 1, 6, 100, " gold"};
    Dice_Variable i_chal_16_35 = {35, 1, 6, 100, " electrum", 1, 6, 100, " gold"};
    Dice_Variable i_chal_16_75 = {75, 2, 6, 100, " gold", 1, 6, 10, " platinum"};
    Dice_Variable i_chal_16_100 = {100, 2, 6, 100, " gold", 2, 6, 10, " platinum"};
    
    var_16.push_back(i_chal_16_20);
    var_16.push_back(i_chal_16_35);
    var_16.push_back(i_chal_16_75);
    var_16.push_back(i_chal_16_100);
    
    Dice_Variable i_chal_17_15 = {15, 2, 6, 1000, " electrum", 8, 6, 100, " gold"};
    Dice_Variable i_chal_17_55 = {55, 1, 6, 1000, " gold", 1, 6, 100, " platinum"};
    Dice_Variable i_chal_17_100 = {100, 1, 6, 1000, " gold", 2, 6, 100, " platinum"};

    var_17.push_back(i_chal_17_15);
    var_17.push_back(i_chal_17_55);
    var_17.push_back(i_chal_17_100);
    
    return var_4;
    return var_10;
    return var_16;
    return var_17;
}


void individual_challange()
{
    
    vector<Dice_Variable> var_4;
    vector<Dice_Variable> var_10;
    vector<Dice_Variable> var_16;
    vector<Dice_Variable> var_17;
    load_dice_variables(var_4, var_10, var_16, var_17);
    
    int raiting = 0, d100 = 0, temp = 0, temp2 = 0;
    string holder = "";
    
    cout << "Please enter a chllange raiting: (1-20) ";
    cin >> raiting;
    
    if (raiting <= 4 && raiting >= 0) {
        raiting = 4;
    } else if (raiting <= 10 && raiting >= 5) {
        raiting = 10;
    } else if (raiting <= 16 && raiting >= 11) {
        raiting = 16;
    } else if (raiting >= 17) {
        raiting = 17;
    }
    
    
    switch (raiting) {
        case 4:
            srand(time(0));
            d100 = rand() % 100 + 1;
            
            if ((d100 >= 1) && (d100 <= 30)) { d100 = 30; }
            else if ((d100 >= 31) && (d100 <= 60)) { d100 = 60; }
            else if ((d100 >= 61) && (d100 <= 70)) { d100 = 70; }
            else if ((d100 >= 71) && (d100 <= 95)) { d100 = 95; }
            else { d100 = 100; }
            
            for (int i = 0; i < var_4.size(); ++i)
            {
                if (d100 == var_4[i].key_value) {
                    for (int j = 0; j < var_4[i].to_roll; ++j) {
                        temp += rand() % var_4[i].type + 1;
                    }
                    cout << "You looted " << temp << var_4[i].text << endl << endl;
                }
            }
            break;
        case 10:
            srand(time(0));
            d100 = rand() % 100 + 1;
            
            if ((d100 >= 1) && (d100 <= 30)) {d100 = 30;}
            else if ((d100 >= 31) && (d100 <= 60)) {d100 = 60;}
            else if ((d100 >= 61) && (d100 <= 70)) {d100 = 70;}
            else if ((d100 >= 71) && (d100 <= 95)) {d100 = 95;}
            else {d100 = 100;}
                
            for (int i = 0; i < var_10.size(); ++i) {
                if (d100 == var_10[i].key_value) {
                    for (int j = 0; j < var_10[i].to_roll; ++j) {
                        temp += rand() % var_10[i].type + 1;
                    }
                    temp *= var_10[i].modifier;
                    for (int k = 0; k < var_10[i].x_dice_var.to_roll_2; ++k) {
                        temp2 += rand() % var_10[i].x_dice_var.type_2 + 1;
                    }
                    temp2 *= var_10[i].x_dice_var.modifier_2;
                    cout << "You looted " << temp << var_10[i].text << " and "
                        << temp2 << var_10[i].x_dice_var.text_2 << endl << endl;
                }
            }
            break;
        case 16:
            srand(time(0));
            d100 = rand() % 100 + 1;
            
            if ((d100 >= 1) && (d100 <= 20)) {d100 = 20;}
            else if ((d100 >= 21) && (d100 <= 35)) {d100 = 35;}
            else if ((d100 >= 36) && (d100 <= 75)) {d100 = 75;}
            else {d100 = 100;}
            
            for (int i = 0; i < var_16.size(); ++i) {
                if (d100 == var_16[i].key_value) {
                    for (int j = 0; j < var_16[i].to_roll; ++j) {
                        temp += rand() % var_16[i].type + 1;
                    }
                    temp *= var_16[i].modifier;
                    for (int k = 0; k < var_16[i].x_dice_var.to_roll_2; ++k) {
                        temp2 += rand() % var_16[i].x_dice_var.type_2 + 1;
                    }
                    temp2 *= var_16[i].x_dice_var.modifier_2;
                    cout << "You looted " << temp << var_16[i].text << " and "
                        << temp2 << var_16[i].x_dice_var.text_2 << endl << endl;
                }
            }
            break;
        case 17:
            srand(time(0));
            d100 = rand() % 100 + 1;
            
            if ((d100 >= 1) && (d100 <= 15)) {d100 = 15;}
            else if ((d100 >= 16) && (d100 <= 55)) {d100 = 55;}
            else {d100 = 100;}
            
            for (int i = 0; i < var_17.size(); ++i) {
                if (d100 == var_17[i].key_value) {
                    for (int j = 0; j < var_17[i].to_roll; ++j) {
                        temp += rand() % var_17[i].type + 1;
                    }
                    temp *= var_17[i].modifier;
                    for (int k = 0; k < var_17[i].x_dice_var.to_roll_2; ++k) {
                        temp2 += rand() % var_17[i].x_dice_var.type_2 + 1;
                    }
                    temp2 *= var_17[i].x_dice_var.modifier_2;
                    cout << "You looted " << temp << var_17[i].text << " and "
                        << temp2 << var_17[i].x_dice_var.text_2 << endl << endl;
                }
            }
            break;
        default:
            break;
    }
}


