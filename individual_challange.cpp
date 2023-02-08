#include "function_definitions.hpp"
#include <iostream>
#include <map>
#include <vector>


using namespace std;


/*
 this entire file handles the smaller quantities of loot rolled for an individual player. This is an edge case in DND, and in many ways was used to get a handle on the logic.
 */




void individual_challange()
{
    
    vector<Dice_Variable> var_4;
    vector<Dice_Variable> var_10;
    vector<Dice_Variable> var_16;
    vector<Dice_Variable> var_17;
    load_dice_variables(var_4, var_10, var_16, var_17);
    
    int raiting = 0,temp = 0, temp2 = 0;
    string holder = "";
    
    cout << "Please enter a chllange raiting: (1-20) ";
    cin >> raiting;
    
    srand(time(0));
    int d100 = rand() % 100 + 1;

    range_handling(raiting, d100);
    switch (raiting) {
        case 4:

            for (int i = 0; i < var_4.size(); ++i)
            {
                if (d100 == var_4[i].get_key_value()) {
                    for (int j = 0; j < var_4[i].get_to_roll(); ++j) {
                        temp += rand() % var_4[i].get_type() + 1;
                    }
                    cout << "You looted " << temp << var_4[i].get_text() << endl << endl;
                }
            }
            break;
        case 10:
            
            for (int i = 0; i < var_10.size(); ++i) {
                if (d100 == var_10[i].get_key_value()) {
                    for (int j = 0; j < var_10[i].get_to_roll(); ++j) {
                        temp += rand() % var_10[i].get_type() + 1;
                    }
                    temp *= var_10[i].get_modifier();
                    for (int k = 0; k < var_10[i].get_to_roll_2(); ++k) {
                        temp2 += rand() % var_10[i].get_type_2() + 1;
                    }
                    temp2 *= var_10[i].get_modifier_2();
                    cout << "You looted " << temp << var_10[i].get_text() << " and "
                        << temp2 << var_10[i].get_text_2() << endl << endl;
                }
            }
            break;
        case 16:
            
            for (int i = 0; i < var_16.size(); ++i) {
                if (d100 == var_16[i].get_key_value()) {
                    for (int j = 0; j < var_16[i].get_to_roll(); ++j) {
                        temp += rand() % var_16[i].get_type() + 1;
                    }
                    temp *= var_16[i].get_modifier();
                    for (int k = 0; k < var_16[i].get_to_roll_2(); ++k) {
                        temp2 += rand() % var_16[i].get_type_2() + 1;
                    }
                    temp2 *= var_16[i].get_modifier_2();
                    cout << "You looted " << temp << var_16[i].get_text() << " and "
                        << temp2 << var_16[i].get_text_2() << endl << endl;
                }
            }
            break;
        case 17:

            for (int i = 0; i < var_17.size(); ++i) {
                if (d100 == var_17[i].get_key_value()) {
                    for (int j = 0; j < var_17[i].get_to_roll(); ++j) {
                        temp += rand() % var_17[i].get_type() + 1;
                    }
                    temp *= var_17[i].get_modifier();
                    for (int k = 0; k < var_17[i].get_to_roll_2(); ++k) {
                        temp2 += rand() % var_17[i].get_type_2() + 1;
                    }
                    temp2 *= var_17[i].get_modifier_2();
                    cout << "You looted " << temp << var_17[i].get_text() << " and "
                        << temp2 << var_17[i].get_text_2() << endl << endl;
                }
            }
            break;
        default:
            break;
    }
}


