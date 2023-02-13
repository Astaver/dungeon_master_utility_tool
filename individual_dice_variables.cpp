//
//  individual_dice_variables.cpp
//  dnd_console_tool
//
//  Created by Aaron Staver on 2/8/23.
//

#include <stdio.h>
#include "function_definitions.hpp"
#include <vector>
#include <iostream>

using namespace std;


void Dice_Variable::set_int_values(int key_value, int to_roll, int type, int modifier, int to_roll_2, int type_2, int modifier_2){
    this->key_value = key_value;
    this->to_roll = to_roll;
    this->type = type;
    this->modifier = modifier;
    this->to_roll_2 =  to_roll_2;
    this->type_2 = type_2;
    this->modifier_2 = modifier_2;
}

int Dice_Variable::get_int_values() const {
    return key_value;
    return to_roll;
    return type;
    return modifier;
    return to_roll_2;
    return type_2;
    return modifier_2;
}

void Dice_Variable::set_string_values(string text, string text_2) {
    this->text = text;
    this->text_2 = text_2;
}

string Dice_Variable::get_string_values() const {
    return text;
    return text_2;
}

void Dice_Variable::set_key_value(int key_value){
    this->key_value = key_value;
}

int Dice_Variable::get_key_value() const {
    return key_value;
}

void Dice_Variable::set_to_roll(int to_roll) {
    this->to_roll = to_roll;
}

int Dice_Variable::get_to_roll() const {
    return to_roll;
}

void Dice_Variable::set_type(int type) {
    this->type = type;
}

int Dice_Variable::get_type() const {
    return type;
}

void Dice_Variable::set_modifier(int modifier){
    this->modifier = modifier;
}

int Dice_Variable::get_modifier() const {
    return modifier;
}

void Dice_Variable::set_text(string text) {
    this->text = text;
}

string Dice_Variable::get_text() const {
    return text;
}
void Dice_Variable::set_to_roll_2(int to_roll_2) {
    this->to_roll_2 = to_roll_2;
}

int Dice_Variable::get_to_roll_2() const {
    return to_roll_2;
}

void Dice_Variable::set_type_2(int type_2) {
    this->type_2 = type_2;
}

int Dice_Variable:: get_type_2() const {
    return type_2;
}

void Dice_Variable::set_modifier_2(int modifier_2) {
    this->modifier_2 = modifier_2;
}

int Dice_Variable::get_modifier_2() const {
    return modifier_2;
}

void Dice_Variable::set_text_2(string text_2) {
    this->text_2 = text_2;
}

string Dice_Variable::get_text_2() const {
    return text_2;
}


vector<Dice_Variable> load_dice_variables(vector<Dice_Variable>& var_4,vector<Dice_Variable>&   var_10, vector<Dice_Variable>&  var_16, vector<Dice_Variable>&  var_17)
{
    Dice_Variable c4_30;
    
    c4_30.set_int_values(30, 5, 6, 0, 0, 0, 0);
    c4_30.set_string_values(" copper", "");
    var_4.push_back(c4_30);
    
    Dice_Variable c4_60;
    c4_60.set_int_values(60, 4, 6, 0, 0, 0, 0);
    c4_60.set_string_values(" silver", "");
    var_4.push_back(c4_60);
    
    Dice_Variable c4_70;
    c4_70.set_int_values(70, 3, 6, 0, 0, 0, 0);
    c4_70.set_string_values(" electrum", "");
    var_4.push_back(c4_70);
    
    Dice_Variable c4_95;
    c4_95.set_int_values(95, 3, 6, 0, 0, 0, 0);
    c4_95.set_string_values(" gold", "");
    var_4.push_back(c4_95);
  
    Dice_Variable c4_100;
    c4_100.set_int_values(100, 1, 6, 0, 0, 0, 0);
    c4_100.set_string_values(" platinum", "");
    var_4.push_back(c4_100);
    
    Dice_Variable c10_30;
    c10_30.set_int_values(30, 4, 6, 100, 1, 6, 10);
    c10_30.set_string_values(" copper", " electrum");
    var_10.push_back(c10_30);
 
    Dice_Variable c10_60;
    c10_60.set_int_values(60, 6, 6, 10, 2, 6, 10);
    c10_60.set_string_values(" silver", " gold");
    var_10.push_back(c10_60);
    
    Dice_Variable c10_70;
    c10_70.set_int_values(70, 1, 6, 100, 2, 6, 10);
    c10_70.set_string_values(" electrum", " gold");
    var_10.push_back(c10_70);
    
    Dice_Variable c10_95;
    c10_95.set_int_values(95, 4, 6, 10, 0, 0, 0);
    c10_95.set_string_values(" gold", "");
    var_10.push_back(c10_95);
    
    Dice_Variable c10_100;
    c10_100.set_int_values(100, 2, 6, 10, 3, 6, 0);
    c10_100.set_string_values(" gold", " platinum");
    var_10.push_back(c10_100);
    
    Dice_Variable c16_20;
    c16_20.set_int_values(20, 4, 6, 100, 1, 6, 100);
    c16_20.set_string_values(" silver", " gold");
    var_16.push_back(c16_20);
    
    Dice_Variable c16_35;
    c16_35.set_int_values(35, 1, 6, 100, 1, 6, 100);
    c16_35.set_string_values(" electrum", " gold");
    var_16.push_back(c16_35);
    
    Dice_Variable c16_75;
    c16_75.set_int_values(75, 2, 6, 100, 1, 6, 10);
    c16_75.set_string_values(" gold", " platinum");
    var_16.push_back(c16_75);
    
    Dice_Variable c16_100;
    c16_100.set_int_values(100, 2, 6, 100, 2, 6, 10);
    c16_100.set_string_values(" gold", " platinum");
    var_16.push_back(c16_100);
    
    Dice_Variable c17_15;
    c17_15.set_int_values(15, 2, 6, 1000, 8, 6, 100);
    c17_15.set_string_values(" electrum", " gold");
    var_17.push_back(c17_15);
    
    Dice_Variable c17_55;
    c17_55.set_int_values(55, 1, 6, 1000, 1, 6, 100);
    c17_55.set_string_values(" gold", " platinum");
    var_17.push_back(c17_55);
    
    Dice_Variable c17_100;
    c17_100.set_int_values(100, 1, 6, 1000, 2, 6, 100);
    c17_100.set_string_values(" gold", " platinum");
    var_17.push_back(c17_100);


    return var_4;
    return var_10;
    return var_16;
    return var_17;
}


int range_handling(int &raiting, int &d100){
    
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
            if      ((d100 >= 1) && (d100 <= 30)) { d100 = 30; }
            else if ((d100 >= 31) && (d100 <= 60)) { d100 = 60; }
            else if ((d100 >= 61) && (d100 <= 70)) { d100 = 70; }
            else if ((d100 >= 71) && (d100 <= 95)) { d100 = 95; }
            else    { d100 = 100; }
            break;
        case 10:
            if      ((d100 >= 1) && (d100 <= 30)) {d100 = 30;}
            else if ((d100 >= 31) && (d100 <= 60)) {d100 = 60;}
            else if ((d100 >= 61) && (d100 <= 70)) {d100 = 70;}
            else if ((d100 >= 71) && (d100 <= 95)) {d100 = 95;}
            else    { d100 = 100; }
            break;
        case 16:
            if      ((d100 >= 1) && (d100 <= 20)) {d100 = 20;}
            else if ((d100 >= 21) && (d100 <= 35)) {d100 = 35;}
            else if ((d100 >= 36) && (d100 <= 75)) {d100 = 75;}
            else    { d100 = 100; }
            break;
        case 17:
            
            if      ((d100 >= 1) && (d100 <= 15)) {d100 = 15;}
            else if ((d100 >= 16) && (d100 <= 55)) {d100 = 55;}
            else    { d100 = 100; }
            break;
        default:
            break;
    }
    return d100;
}



void roll_handling(int raiting, int& d100, vector<Dice_Variable>& vec) {
    
    int temp = 0, temp2 = 0;
    
    for (int i = 0; i < vec.size(); ++i)
    {
        if (d100 == vec[i].get_key_value()) {
            if (raiting == 4) {
                for (int j = 0; j < vec[i].get_to_roll(); ++j) {
                    temp += rand() % vec[i].get_type() + 1;
                }
                cout << "You looted " << temp << vec[i].get_text() << endl << endl;
            }
            else {
                for (int i = 0; i < vec.size(); ++i) {
                    if (d100 == vec[i].get_key_value()) {
                        for (int j = 0; j < vec[i].get_to_roll(); ++j) {
                            temp += rand() % vec[i].get_type() + 1;
                        }
                        temp *= vec[i].get_modifier();
                        for (int k = 0; k < vec[i].get_to_roll_2(); ++k) {
                            temp2 += rand() % vec[i].get_type_2() + 1;
                        }
                        temp2 *= vec[i].get_modifier_2();
                        cout << "You looted " << temp << vec[i].get_text() << " and "
                            << temp2 << vec[i].get_text_2() << endl << endl;
                        }
                    }
                }
            
            }
    }

}
