//
//  dice_roll.cpp
//  dnd_console_tool
//
//  Created by Aaron Staver on 1/23/23.
//
#include <iostream>


using namespace std;

void dice_roll()
{
    char _command = '\0';
    do {
        
        int type, number, mod = 0;
        int what_to_roll;
        int running_total = 0;
        cout << "Enter numberic value of dice type to roll: ";
        cin >> type;
        if(type == 4 || type == 6 || type == 8 || type == 10 || type == 12 || type == 20 || type == 100)
        {
            cout << "Enter number of d" << type << " to roll: ";
            cin >> number;
            cout << "(If applicable) Enter value of modifier: ";
            cin >> mod;
            
            
            for (int i = 0; i < number; ++i)
            {
                what_to_roll = rand() % type + 1;
               // cout << "rolled a " << what_to_roll << endl;
                running_total += what_to_roll;
               // cout << "running total: " << running_total << endl;
            }
            running_total += mod;
            cout << "You rolled: " << running_total << endl << endl;
            cout << "Roll again? (y/n): ";
            cin >> _command;
            cout << endl;
        }
        else
        {
            cout << "Please enter a valid dice type." << endl;
            dice_roll();
        }
    } while (tolower(_command) != 'n');
}
