//
//  hoard_money_calc.cpp
//  dnd_console_tool
//
//  Created by Aaron Staver on 2/6/23.
//

#include <stdio.h>
#include "function_definitions.hpp"
#include <iostream>


/*
 streamlines my money calculation
 */


int money_calc(int raiting)
{
   // srand(time_t(0));
    int _copper = 0, _silver = 0, _gold = 0, _platinum = 0;
    
    if (raiting >= 1 && raiting < 5) {
        for (int i = 0; i < 6; ++i){
           // srand(time_t(0));
            int r = rand() % 6 + 1;
            _copper += r;
        }
        for (int i = 0; i < 3; ++i){
          //  srand(time_t(0));
            int r = rand() % 6 + 1;
            _silver += r;
        }
        for (int i = 0; i < 2; ++i){
         //   srand(time_t(0));
            int r = rand() % 6 + 1;
            _gold += r;
        }
        _copper *= 100;
        _silver *= 100;
        _gold *= 10;

        cout << _gold << " gp" << endl
            << _silver << " sp" << endl
            << _copper << " cp" << endl;

    } else if (raiting >= 5 && raiting < 11) {
        for (int i = 0; i < 2; ++i) {
            int r = rand() % 6 + 1;
            _copper += r;
        }
        for (int i = 0; i < 2; ++i) {
            int r = rand() % 6 + 1;
            _silver += r;
        }
        for (int i = 0; i < 6; ++i) {
            int r = rand() % 6 + 1;
            _gold += r;
        }
        for (int i = 0; i < 3; ++i) {
            int r = rand() % 6 + 1;
            _platinum += r;
        }
        _copper *= 100;
        _silver *= 1000;
        _gold *= 100;
        _platinum *= 10;
        
        cout << _platinum << " pp" << endl
            << _gold << " gp" << endl
            << _silver << " sp" << endl
            << _gold << " gp" << endl;
        

    } else if (raiting >= 11 && raiting < 17) {
        for (int i = 0; i < 4; ++i) {
            int r = rand() % 6 + 1;
            _gold += r;
        }
        for (int i = 0; i < 5; ++i) {
            int r = rand() % 6 + 1;
            _platinum += r;
        }
        _gold *= 1000;
        _platinum *= 100;
        
        cout << _platinum << " pp" << endl
            << _gold << " gp" << endl;
        
        
    } else {
        for (int i = 0; i < 12; ++i) {
            int r = rand() % 6 + 1;
            _gold += r;
        }
        for (int i = 0; i < 8; ++i) {
            int r = rand() % 6 + 1;
            _platinum += r;
        }
        cout << _platinum << " pp" << endl
            << _gold << " gp" << endl;
        
    }
    
    return _copper && _silver && _gold && _platinum;
}
