//
//  load_hoard_loot.cpp
//  dnd_console_tool
//
//  Created by Aaron Staver on 2/4/23.
//

#include <stdio.h>
#include <stdio.h>
#include "function_definitions.hpp"
#include <vector>
#include <string>



using namespace std;


/*
 this file loades my values into my vectors to sort and pull from them later in other files.
 */



//range handling of d100 and raiting for hoard loot generation
int hoard_handling(int& raiting, int& d100){
    //streamlines the ranges of the raiting
    if (raiting >= 1 && raiting <= 4) { raiting = 4;}
    if (raiting >= 5 && raiting <= 10) { raiting = 10;}
    if (raiting >= 11 && raiting <= 16) { raiting = 16;}
    if (raiting >= 17 && raiting <= 20) { raiting = 17;}
    
    
    switch (raiting) {
        case 4:
            //streamline the ranges of the d100 results and assign to adj
            if      (d100 >= 1 && d100 <= 6)   {d100 = 6;}
            else if (d100 >= 7 && d100 <= 16)  {d100 = 16;}
            else if (d100 >= 17 && d100 <= 26) {d100 = 26;}
            else if (d100 >= 27 && d100 <= 36) {d100 = 36;}
            else if (d100 >= 37 && d100 <= 44) {d100 = 44;}
            else if (d100 >= 45 && d100 <= 52) {d100 = 52;}
            else if (d100 >= 53 && d100 <= 60) {d100 = 60;}
            else if (d100 >= 61 && d100 <= 65) {d100 = 65;}
            else if (d100 >= 66 && d100 <= 70) {d100 = 70;}
            else if (d100 >= 71 && d100 <= 75) {d100 = 75;}
            else if (d100 >= 76 && d100 <= 78) {d100 = 78;}
            else if (d100 >= 79 && d100 <= 80) {d100 = 80;}
            else if (d100 >= 81 && d100 <= 85) {d100 = 85;}
            else if (d100 >= 86 && d100 <= 92) {d100 = 92;}
            else if (d100 >= 93 && d100 <= 97) {d100 = 97;}
            else if (d100 >= 98 && d100 <= 99) {d100 = 99;}
            else    {d100 = 100;}
            break;
        case 10:
            if      (d100 >= 1 && d100 <= 4)   {d100 = 4;}
            else if (d100 >= 5 && d100 <= 10)  {d100 = 10;}
            else if (d100 >= 11 && d100 <= 16) {d100 = 16;}
            else if (d100 >= 17 && d100 <= 22) {d100 = 22;}
            else if (d100 >= 23 && d100 <= 28) {d100 = 28;}
            else if (d100 >= 29 && d100 <= 32) {d100 = 32;}
            else if (d100 >= 33 && d100 <= 36) {d100 = 36;}
            else if (d100 >= 37 && d100 <= 40) {d100 = 40;}
            else if (d100 >= 41 && d100 <= 44) {d100 = 44;}
            else if (d100 >= 45 && d100 <= 49) {d100 = 49;}
            else if (d100 >= 50 && d100 <= 54) {d100 = 54;}
            else if (d100 >= 55 && d100 <= 59) {d100 = 59;}
            else if (d100 >= 60 && d100 <= 63) {d100 = 63;}
            else if (d100 >= 64 && d100 <= 66) {d100 = 66;}
            else if (d100 >= 67 && d100 <= 69) {d100 = 69;}
            else if (d100 >= 70 && d100 <= 72) {d100 = 72;}
            else if (d100 >= 73 && d100 <= 74) {d100 = 74;}
            else if (d100 >= 75 && d100 <= 76) {d100 = 76;}
            else if (d100 >= 77 && d100 <= 78) {d100 = 78;}
            else if (d100 == 79) {d100 = 79;}
            else if (d100 == 80) {d100 = 80;}
            else if (d100 >= 81 && d100 <= 84) {d100 = 84;}
            else if (d100 >= 85 && d100 <= 88) {d100 = 88;}
            else if (d100 >= 89 && d100 <= 91) {d100 = 91;}
            else if (d100 >= 92 && d100 <= 94) {d100 = 94;}
            else if (d100 >= 95 && d100 <= 96) {d100 = 96;}
            else if (d100 >= 97 && d100 <= 98) {d100 = 98;}
            else if (d100 == 99) {d100 = 99;}
            else    {d100 = 100;}
            break;
        case 16:
            if      (d100 >= 1 && d100 <= 3)    {d100 = 3;}
            else if (d100 >= 4 && d100 <= 6)    {d100 = 6;}
            else if (d100 >= 7 && d100 <= 10)   {d100 = 10;}
            else if (d100 >= 11 && d100 <= 12)  {d100 = 12;}
            else if (d100 >= 13 && d100 <= 15)  {d100 = 15;}
            else if (d100 >= 16 && d100 <= 19)  {d100 = 19;}
            else if (d100 >= 20 && d100 <= 23)  {d100 = 23;}
            else if (d100 >= 24 && d100 <= 26)  {d100 = 26;}
            else if (d100 >= 27 && d100 <= 29)  {d100 = 29;}
            else if (d100 >= 30 && d100 <= 35)  {d100 = 35;}
            else if (d100 >= 36 && d100 <= 40)  {d100 = 40;}
            else if (d100 >= 41 && d100 <= 45)  {d100 = 45;}
            else if (d100 >= 46 && d100 <= 50)  {d100 = 50;}
            else if (d100 >= 51 && d100 <= 54)  {d100 = 54;}
            else if (d100 >= 55 && d100 <= 58)  {d100 = 58;}
            else if (d100 >= 59 && d100 <= 62)  {d100 = 62;}
            else if (d100 >= 63 && d100 <= 66)  {d100 = 66;}
            else if (d100 >= 67 && d100 <= 68)  {d100 = 68;}
            else if (d100 >= 69 && d100 <= 70)  {d100 = 70;}
            else if (d100 >= 71 && d100 <= 72)  {d100 = 72;}
            else if (d100 >= 73 && d100 <= 74)  {d100 = 74;}
            else if (d100 >= 75 && d100 <= 76)  {d100 = 76;}
            else if (d100 >= 77 && d100 <= 78)  {d100 = 78;}
            else if (d100 >= 79 && d100 <= 80)  {d100 = 80;}
            else if (d100 >= 81 && d100 <= 82)  {d100 = 82;}
            else if (d100 >= 83 && d100 <= 85)  {d100 = 85;}
            else if (d100 >= 86 && d100 <= 88)  {d100 = 88;}
            else if (d100 >= 89 && d100 <= 90)  {d100 = 90;}
            else if (d100 >= 91 && d100 <= 92)  {d100 = 92;}
            else if (d100 >= 93 && d100 <= 94)  {d100 = 94;}
            else if (d100 >= 95 && d100 <= 96)  {d100 = 96;}
            else if (d100 >= 97 && d100 <= 98)  {d100 = 98;}
            else if (d100 >= 99 && d100 <= 100) {d100 = 100;}
            break;
        case 17:
            if      (d100 >= 1 && d100 <= 2)   {d100 = 2;}
            else if (d100 >= 3 && d100 <= 5)   {d100 = 5;}
            else if (d100 >= 6 && d100 <= 8)   {d100 = 8;}
            else if (d100 >= 9 && d100 <= 11)  {d100 = 11;}
            else if (d100 >= 12 && d100 <= 14) {d100 = 14;}
            else if (d100 >= 15 && d100 <= 22) {d100 = 22;}
            else if (d100 >= 23 && d100 <= 30) {d100 = 30;}
            else if (d100 >= 31 && d100 <= 38) {d100 = 38;}
            else if (d100 >= 39 && d100 <= 46) {d100 = 46;}
            else if (d100 >= 47 && d100 <= 52) {d100 = 52;}
            else if (d100 >= 53 && d100 <= 58) {d100 = 58;}
            else if (d100 >= 59 && d100 <= 63) {d100 = 63;}
            else if (d100 >= 64 && d100 <= 68) {d100 = 68;}
            else if (d100 == 69) {d100 = 69;}
            else if (d100 == 70) {d100 = 70;}
            else if (d100 == 71) {d100 = 71;}
            else if (d100 == 72) {d100 = 72;}
            else if (d100 >= 73 && d100 <= 74) {d100 = 74;}
            else if (d100 >= 75 && d100 <= 76) {d100 = 76;}
            else if (d100 >= 77 && d100 <= 78) {d100 = 78;}
            else if (d100 >= 79 && d100 <= 80) {d100 = 80;}
            else if (d100 >= 81 && d100 <= 85) {d100 = 85;}
            else if (d100 >= 86 && d100 <= 90) {d100 = 90;}
            else if (d100 >= 91 && d100 <= 95) {d100 = 95;}
            else if (d100 >= 96 && d100 <= 100) {d100 = 100;}
            break;
        default:
            break;
    }
    return d100;
}



vector<Hoard_Loot> load_loot_variables(vector<Hoard_Loot>& hoard_loot_4, vector<Hoard_Loot>& hoard_loot_10, vector<Hoard_Loot>& hoard_loot_16, vector<Hoard_Loot>& hoard_loot_17)
{
    //challange 4
    Hoard_Loot hoard_4_6 = {6};
    Hoard_Loot hoard_4_16 = {16, 2, 6, 10, " gems"};
    Hoard_Loot hoard_4_26 = {26, 2, 4, 25, " art"};
    Hoard_Loot hoard_4_36 = {36, 2, 6, 50, " gems"};
    Hoard_Loot hoard_4_44 = {44, 2, 6, 10, " gems", 1, 6, 'a'};
    Hoard_Loot hoard_4_52 = {52, 2, 4, 25, " art" , 1, 6, 'a'};
    Hoard_Loot hoard_4_60 = {60, 2, 6, 50, " hems" , 1, 6, 'a'};
    Hoard_Loot hoard_4_65 = {65, 2, 6, 10, " gems" , 1, 4, 'b'};
    Hoard_Loot hoard_4_70 = {70, 2, 4, 25, " art" , 1, 4, 'b'};
    Hoard_Loot hoard_4_75 = {75, 2, 6, 50, " gems" , 1, 4, 'b'};
    Hoard_Loot hoard_4_78 = {78, 2, 6, 10, " gems", 1, 4, 'c'};
    Hoard_Loot hoard_4_80 = {80, 2, 4, 25, " art" , 1, 4, 'c'};
    Hoard_Loot hoard_4_85 = {85, 2, 6, 50, " gems" , 1, 4, 'c'};
    Hoard_Loot hoard_4_92 = {92, 2, 4, 25, " art" , 1, 4, 'f'};
    Hoard_Loot hoard_4_97 = {97, 2, 6, 50, " gems" , 1, 4, 'f'};
    Hoard_Loot hoard_4_99 = {99, 2, 4, 25, " art" , 1, 1, 'g'};
    Hoard_Loot hoard_4_100 = {100, 2, 6, 50, " gems" , 1, 1, 'g'};
    
    hoard_loot_4.push_back(hoard_4_6);
    hoard_loot_4.push_back(hoard_4_16);
    hoard_loot_4.push_back(hoard_4_26);
    hoard_loot_4.push_back(hoard_4_36);
    hoard_loot_4.push_back(hoard_4_44);
    hoard_loot_4.push_back(hoard_4_52);
    hoard_loot_4.push_back(hoard_4_60);
    hoard_loot_4.push_back(hoard_4_65);
    hoard_loot_4.push_back(hoard_4_70);
    hoard_loot_4.push_back(hoard_4_75);
    hoard_loot_4.push_back(hoard_4_78);
    hoard_loot_4.push_back(hoard_4_80);
    hoard_loot_4.push_back(hoard_4_85);
    hoard_loot_4.push_back(hoard_4_92);
    hoard_loot_4.push_back(hoard_4_97);
    hoard_loot_4.push_back(hoard_4_99);
    hoard_loot_4.push_back(hoard_4_100);
    
    //challange 10
    Hoard_Loot hoard_10_4 = {4};
    hoard_loot_10.push_back(hoard_10_4);
    Hoard_Loot hoard_10_10 = {10, 2, 4, 25, " art"};
    hoard_loot_10.push_back(hoard_10_10);
    Hoard_Loot hoard_10_16 = {16, 3, 6, 50, " gems"};
    hoard_loot_10.push_back(hoard_10_16);
    Hoard_Loot hoard_10_22 = {22, 3, 6, 100, " gems"};
    hoard_loot_10.push_back(hoard_10_22);
    Hoard_Loot hoard_10_28 = {28, 2, 4, 25, " art"};
    hoard_loot_10.push_back(hoard_10_28);
    Hoard_Loot hoard_10_32 = {32, 2, 4, 25, " art", 1, 6, 'a'};
    hoard_loot_10.push_back(hoard_10_32);
    Hoard_Loot hoard_10_36 = {36, 3, 6, 50, " gems", 1, 6, 'a'};
    hoard_loot_10.push_back(hoard_10_36);
    Hoard_Loot hoard_10_40 = {40, 3, 6, 100, " gems", 1, 6, 'a'};
    hoard_loot_10.push_back(hoard_10_40);
    Hoard_Loot hoard_10_44 = {44, 2, 4, 250, " art" , 1, 6, 'a'};
    hoard_loot_10.push_back(hoard_10_44);
    Hoard_Loot hoard_10_49 = {49, 2, 4, 25, " art", 1, 4, 'b'};
    hoard_loot_10.push_back(hoard_10_49);
    Hoard_Loot hoard_10_54 = {54, 3, 6, 50, " gems", 1, 4, 'b'};
    hoard_loot_10.push_back(hoard_10_54);
    Hoard_Loot hoard_10_59 = {59, 3, 6, 100, " gems", 1, 4, 'b'};
    hoard_loot_10.push_back(hoard_10_59);
    Hoard_Loot hoard_10_63 = {63, 2, 4, 250, " art" , 1, 4, 'b'};
    hoard_loot_10.push_back(hoard_10_63);
    Hoard_Loot hoard_10_66 = {66, 2, 4, 25, " art" , 1, 4, 'b'};
    hoard_loot_10.push_back(hoard_10_66);
    Hoard_Loot hoard_10_69 = {69, 3, 6, 50, " gems", 1, 4, 'c'};
    hoard_loot_10.push_back(hoard_10_69);
    Hoard_Loot hoard_10_72 = {72, 3, 6, 100, " gems", 1, 4, 'c'};
    hoard_loot_10.push_back(hoard_10_72);
    Hoard_Loot hoard_10_74 = {74, 2, 4, 250, " art", 1, 4, 'c'};
    hoard_loot_10.push_back(hoard_10_74);
    Hoard_Loot hoard_10_76 = {76, 2, 4, 25, " art", 1, 1, 'd'};
    hoard_loot_10.push_back(hoard_10_76);
    Hoard_Loot hoard_10_78 = {78, 3, 6, 50, " gems", 1, 1, 'd'};
    hoard_loot_10.push_back(hoard_10_78);
    Hoard_Loot hoard_10_79 = {79, 3, 6, 100, " gems", 1, 1, 'd'};
    hoard_loot_10.push_back(hoard_10_79);
    Hoard_Loot hoard_10_80 = {80, 2, 4, 250, " art", 1, 1, 'd'};
    hoard_loot_10.push_back(hoard_10_80);
    Hoard_Loot hoard_10_84 = {84, 2, 4, 25, " art", 1, 4, 'f'};
    hoard_loot_10.push_back(hoard_10_84);
    Hoard_Loot hoard_10_88 = {88, 3, 6, 50, " gems", 1, 4, 'f'};
    hoard_loot_10.push_back(hoard_10_88);
    Hoard_Loot hoard_10_91 = {91, 3, 6, 100, " gems", 1, 4, 'f'};
    hoard_loot_10.push_back(hoard_10_91);
    Hoard_Loot hoard_10_94 = {94, 2, 4, 250, " art", 1, 4, 'f'};
    hoard_loot_10.push_back(hoard_10_94);
    Hoard_Loot hoard_10_96 = {96, 3, 6, 100, " gems", 1, 4, 'g'};
    hoard_loot_10.push_back(hoard_10_96);
    Hoard_Loot hoard_10_98 = {98, 2, 4, 250, " art", 1, 6, 'g'};
    hoard_loot_10.push_back(hoard_10_98);
    Hoard_Loot hoard_10_99 = {99, 3, 6, 100, " gems", 1, 1, 'h'};
    hoard_loot_10.push_back(hoard_10_99);
    Hoard_Loot hoard_10_100 = {100, 2, 4, 250, " art", 1, 1, 'h'};
    hoard_loot_10.push_back(hoard_10_100);
    
    
    //challange 16
    Hoard_Loot hoard_16_3 = {3};
    hoard_loot_16.push_back(hoard_16_3);
    Hoard_Loot hoard_16_6 = {6, 2, 4, 250, " art"};
    hoard_loot_16.push_back(hoard_16_6);
    Hoard_Loot hoard_16_10 = {10, 2, 4, 750, " art"};
    hoard_loot_16.push_back(hoard_16_10);
    Hoard_Loot hoard_16_12 = {12, 3, 6, 500, " gems"};
    hoard_loot_16.push_back(hoard_16_12);
    Hoard_Loot hoard_16_15 = {15, 3, 6, 1000, " gems"};
    hoard_loot_16.push_back(hoard_16_15);
    Hoard_Loot hoard_16_19 = {19, 2, 4, 250, " art", 1, 4, 'a', 1, 6, 'b'};
    hoard_loot_16.push_back(hoard_16_19);
    Hoard_Loot hoard_16_23 = {23, 2, 4, 750, " art" , 1, 4, 'a', 1, 6, 'b'};
    hoard_loot_16.push_back(hoard_16_23);
    Hoard_Loot hoard_16_26 = {26, 3, 6, 500, " gems", 1, 4, 'a', 1, 6, 'b'};
    hoard_loot_16.push_back(hoard_16_26);
    Hoard_Loot hoard_16_29 = {29, 3, 6, 1000, " gems", 1, 4, 'a', 1, 6, 'b'};
    hoard_loot_16.push_back(hoard_16_29);
    Hoard_Loot hoard_16_35 = {35, 2, 4, 250, " art" , 1, 6, 'c'};
    hoard_loot_16.push_back(hoard_16_35);
    Hoard_Loot hoard_16_40 = {40, 2, 4, 750, " art", 1, 6, 'c'};
    hoard_loot_16.push_back(hoard_16_40);
    Hoard_Loot hoard_16_45 = {45, 3, 6, 500, " gems", 1, 6, 'c'};
    hoard_loot_16.push_back(hoard_16_45);
    Hoard_Loot hoard_16_50 = {50, 3, 6, 1000, " gems", 1, 6, 'c'};
    hoard_loot_16.push_back(hoard_16_50);
    Hoard_Loot hoard_16_54 = {54, 2, 4, 250, " art", 1, 4, 'd'};
    hoard_loot_16.push_back(hoard_16_54);
    Hoard_Loot hoard_16_58 = {58, 2, 4, 750, " art", 1, 4, 'd'};
    hoard_loot_16.push_back(hoard_16_58);
    Hoard_Loot hoard_16_62 = {62, 3, 6, 500, " gems", 1, 4, 'd'};
    hoard_loot_16.push_back(hoard_16_62);
    Hoard_Loot hoard_16_66 = {66, 3, 6, 1000, " gems", 1, 4, 'd'};
    hoard_loot_16.push_back(hoard_16_66);
    Hoard_Loot hoard_16_68 = {68, 2, 4, 250, " art", 1, 1, 'e'};
    hoard_loot_16.push_back(hoard_16_68);
    Hoard_Loot hoard_16_70 = {70, 2, 4, 750, " art", 1, 1, 'e'};
    hoard_loot_16.push_back(hoard_16_70);
    Hoard_Loot hoard_16_72 = {72, 3, 6, 500, " gems", 1, 1, 'e'};
    hoard_loot_16.push_back(hoard_16_72);
    Hoard_Loot hoard_16_74 = {74, 3, 6, 1000, " gems", 1, 1, 'e'};
    hoard_loot_16.push_back(hoard_16_74);
    Hoard_Loot hoard_16_76 = {76, 2, 4, 250, " art", 1, 1, 'f', 1, 4, 'g'};
    hoard_loot_16.push_back(hoard_16_76);
    Hoard_Loot hoard_16_78 = {78, 2, 4, 750, " art", 1, 1, 'f', 1, 4, 'g'};
    hoard_loot_16.push_back(hoard_16_78);
    Hoard_Loot hoard_16_80 = {80, 3, 6, 500, " gems", 1, 1, 'f', 1, 4, 'g'};
    hoard_loot_16.push_back(hoard_16_80);
    Hoard_Loot hoard_16_82 = {82, 3, 6, 1000, " gems", 1, 1, 'f', 1, 4, 'g'};
    hoard_loot_16.push_back(hoard_16_82);
    Hoard_Loot hoard_16_85 = {85, 2, 4, 250, " art", 1, 4, 'h'};
    hoard_loot_16.push_back(hoard_16_85);
    Hoard_Loot hoard_16_88 = {88, 2, 4, 750, " art", 1, 4, 'h'};
    hoard_loot_16.push_back(hoard_16_88);
    Hoard_Loot hoard_16_90 = {90, 3, 6, 500, " gems", 1, 4, 'h'};
    hoard_loot_16.push_back(hoard_16_90);
    Hoard_Loot hoard_16_92 = {92, 3, 6, 1000, " gems", 1, 4, 'h'};
    hoard_loot_16.push_back(hoard_16_92);
    Hoard_Loot hoard_16_94 = {94, 2, 4, 250, " art", 1, 1, 'i'};
    hoard_loot_16.push_back(hoard_16_94);
    Hoard_Loot hoard_16_96 = {96, 3, 6, 500, " gems", 1, 1, 'i'};
    hoard_loot_16.push_back(hoard_16_96);
    Hoard_Loot hoard_16_98 = {98, 3, 6, 1000, " gems", 1, 1, 'i'};
    hoard_loot_16.push_back(hoard_16_98);
    Hoard_Loot hoard_16_100 = {100, 3, 6, 1000, " gems", 1, 1, 'i'};
    hoard_loot_16.push_back(hoard_16_100);
    
    //challange 17
    Hoard_Loot hoard_17_2 = {2};
    hoard_loot_17.push_back(hoard_17_2);
    Hoard_Loot hoard_17_5 = {5, 3, 6, 1000, " gems", 1, 8, 'c'};
    hoard_loot_17.push_back(hoard_17_5);
    Hoard_Loot hoard_17_8 = {8, 1, 10, 2500, " art", 1, 8, 'c'};
    hoard_loot_17.push_back(hoard_17_8);
    Hoard_Loot hoard_17_11 = {11, 1, 4, 7500, " art", 1, 8, 'c'};
    hoard_loot_17.push_back(hoard_17_11);
    Hoard_Loot hoard_17_14 = {14, 1, 8, 5000, " gems", 1, 8, 'c'};
    hoard_loot_17.push_back(hoard_17_14);
    Hoard_Loot hoard_17_22 = {22, 3, 6, 1000, " gems", 1, 6, 'd'};
    hoard_loot_17.push_back(hoard_17_22);
    Hoard_Loot hoard_17_30 = {30, 1, 10, 2500, " art", 1, 6, 'd'};
    hoard_loot_17.push_back(hoard_17_30);
    Hoard_Loot hoard_17_38 = {38, 1, 4, 500, " art", 1, 6, 'd'};
    hoard_loot_17.push_back(hoard_17_38);
    Hoard_Loot hoard_17_46 = {46, 1, 8, 5000, " gems", 1, 6, 'd'};
    hoard_loot_17.push_back(hoard_17_46);
    Hoard_Loot hoard_17_52 = {52, 3, 6, 1000, " gems", 1, 6, 'e'};
    hoard_loot_17.push_back(hoard_17_52);
    Hoard_Loot hoard_17_58 = {58, 1, 10, 2500, " art", 1, 6, 'e'};
    hoard_loot_17.push_back(hoard_17_58);
    Hoard_Loot hoard_17_63 = {63, 1, 4, 7500, " art", 1, 6, 'e'};
    hoard_loot_17.push_back(hoard_17_63);
    Hoard_Loot hoard_17_68 = {68, 1, 8, 5000, " gems", 1, 6, 'e'};
    hoard_loot_17.push_back(hoard_17_68);
    Hoard_Loot hoard_17_69 = {69, 3, 6, 1000, " gems", 1, 4, 'g'};
    hoard_loot_17.push_back(hoard_17_69);
    Hoard_Loot hoard_17_70 = {70, 1, 10, 2500, " art", 1, 4, 'g'};
    hoard_loot_17.push_back(hoard_17_70);
    Hoard_Loot hoard_17_71 = {71, 1, 4, 7500, " art", 1, 4, 'g'};
    hoard_loot_17.push_back(hoard_17_71);
    Hoard_Loot hoard_17_72 = {72, 1, 8, 5000, " gems", 1, 4, 'g'};
    hoard_loot_17.push_back(hoard_17_72);
    Hoard_Loot hoard_17_74 = {74, 3, 6, 1000, " gems", 1, 4, 'h'};
    hoard_loot_17.push_back(hoard_17_74);
    Hoard_Loot hoard_17_76 = {76, 1, 10, 2500, " art", 1, 4, 'h'};
    hoard_loot_17.push_back(hoard_17_76);
    Hoard_Loot hoard_17_78 = {78, 1, 4, 7500, " art", 1, 4, 'h'};
    hoard_loot_17.push_back(hoard_17_78);
    Hoard_Loot hoard_17_80 = {80, 1, 8, 5000, " gems", 1, 4, 'h'};
    hoard_loot_17.push_back(hoard_17_80);
    Hoard_Loot hoard_17_85 = {85, 3, 6, 1000, " gems", 1, 4, 'i'};
    hoard_loot_17.push_back(hoard_17_85);
    Hoard_Loot hoard_17_90 = {90, 1, 10, 2500, " art", 1, 4, 'i'};
    hoard_loot_17.push_back(hoard_17_90);
    Hoard_Loot hoard_17_95 = {95, 1, 4, 7500, " art", 1, 1, 'f', 1, 4, 'g'};
    hoard_loot_17.push_back(hoard_17_95);
    Hoard_Loot hoard_17_100 = {100, 1, 8, 5000, " gems", 1, 4, 'i'};
    
    return hoard_loot_4;
    return hoard_loot_10;
    return hoard_loot_16;
    return hoard_loot_17;
}
