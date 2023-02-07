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
