#include "function_definitions.hpp"
#include <iostream>
#include <map>
#include <vector>


using namespace std;

//void roll_handling(int raiting, int& d100, vector<Dice_Variable>& vec);


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
    
    int raiting = 0;

    cout << "Please enter a chllange raiting: (1-20) ";
    cin >> raiting;
    
    srand(time(0));
    int d100 = rand() % 100 + 1;

    range_handling(raiting, d100);
    switch (raiting) {
        case 4:
            roll_handling(raiting, d100, var_4);
            break;
        case 10:
            roll_handling(raiting, d100, var_10);
            break;
        case 16:
            roll_handling(raiting, d100, var_16);
            break;
        case 17:
            roll_handling(raiting, d100, var_17);
            break;
        default:
            break;
    }
}


