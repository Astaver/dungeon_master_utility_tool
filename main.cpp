#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "function_definitions.hpp"


//using namespace std;


char get_char(string prompt);

int main()
{
    //vectors of type Hoard_Loot to handle each challange raiting range
    vector<Hoard_Loot> hoard_loot_4;
    vector<Hoard_Loot> hoard_loot_10;
    vector<Hoard_Loot> hoard_loot_16;
    vector<Hoard_Loot> hoard_loot_17;
    load_loot_variables(hoard_loot_4, hoard_loot_10, hoard_loot_16, hoard_loot_17);
    
    //ensures true random values
    srand(time(0));
    
    cout << "Dungeon Master Utility Tool" << endl << endl;
    
    display_menu();
    
    char command;
    do
    {
        command = get_char("Command: ");
        switch (tolower(command)) {
            case 'd':
                dice_roll();
                display_menu();
                break;
            case 'l':
                loot_roll(hoard_loot_4, hoard_loot_10, hoard_loot_16, hoard_loot_17);
                display_menu();
                break;
            case 'n':
                //generate_npc();
                display_menu();
                break;
            case 'x':
                cout << "Bye!" << endl << endl;
                break;
            default:
                cout << "Invalid command. Please try again." << endl << endl;
                display_menu();
                break;
        }
        
    } while (tolower(command) != 'x');
}

char get_char(string prompt)
{
    char choice;
    cout << prompt;
    cin >> choice;
    return choice;
}

void display_menu()
{
    cout << "COMMANDS" << endl
        << "d - Dice Roller" << endl
        << "l - Loot Generation" << endl
        << "n - Name Generation" << endl
        << "x - Exit" << endl;
}



//pass by refrence our vectors
void loot_roll(vector<Hoard_Loot>& hoard_loot_4, vector<Hoard_Loot>& hoard_loot_10,vector<Hoard_Loot>& hoard_loot_16, vector<Hoard_Loot>& hoard_loot_17)
{
    char _command = '\0';
    int _choice;
    do {
        cout << "Loot Menu" << endl
             << "1. Individual Challange" << endl
             << "2. Treasure Hoard" << endl;
        cin >> _choice;
        
        switch (_choice) {
            case 1:
                individual_challange();
                break;
            case 2:
                treasure_hoard_logic(hoard_loot_4, hoard_loot_10, hoard_loot_16, hoard_loot_17);
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
                //loot_roll();
                break;
        }
        
    } while (tolower(_command) != 'n');
}




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
