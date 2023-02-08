
//
//  dice_roll.cpp
//  dnd_console_tool
//
//  Created by Aaron Staver on 1/23/23.
//
#include <iostream>


using namespace std;

/*
 handles all logic for standard *non loot related* dice roles.
 */

class Dice {
private:
    int type;
    int number_of_type;
    int modifier;
public:
    void set_type(int type);
    int get_type() const;
    void set_number_of_type(int number_of_type);
    int get_number_of_type() const;
    void set_modifier(int modifier);
    int get_modifier() const;
};

void Dice::set_type(int type) {
    if(type == 4 || type == 6 || type == 8 || type == 10 || type == 12 || type == 20 || type == 100) {
        this->type = type;
    }
    else {
        throw invalid_argument("Please enter a valid dice type.");
    }
}

int Dice::get_type() const {
    return type;
}

void Dice::set_number_of_type(int number_of_type) {
    this->number_of_type = number_of_type;
}

int Dice::get_number_of_type() const {
    return number_of_type;
}

void Dice::set_modifier(int modifier) {
    this->modifier = modifier;
}

int Dice::get_modifier() const {
    return modifier;
}

void dice_roll()
{
    char _command = '\0';
    do {
        
        Dice dice;
        int type, number_of_type, modifier = 0;
        int what_to_roll;
        int running_total = 0;
        cout << "Enter numberic value of dice type to roll: ";
        cin >> type;
        try {
            dice.set_type(type);
        } catch (const invalid_argument& e) {
            cout << e.what() << endl
                << "Try again." << endl << endl;
            continue;;
        }
        
        cout << "Enter number of d" << dice.get_type() << " to roll: ";
        cin >> number_of_type;
        dice.set_number_of_type(number_of_type);
        cout << "(If applicable) Enter value of modifier: ";
        cin >> modifier;
        dice.set_modifier(modifier);
            
        
        for (int i = 0; i < dice.get_number_of_type(); ++i)
        {
            srand(time(0));
            what_to_roll = rand() % dice.get_type() + 1;
            running_total += what_to_roll;
        }
        running_total += dice.get_modifier();
        cout << "You rolled: " << running_total << endl << endl;
        cout << "Roll again? (y/n): ";
        cin >> _command;
        cout << endl;
    
    } while (tolower(_command) != 'n');
}
