//
//  magic_table.cpp
//  dnd_console_tool
//
//  Created by Aaron Staver on 2/4/23.
//
#include <iostream>
#include <stdio.h>
#include "function_definitions.hpp"
#include <string>

using namespace std;


void magic_table(vector<string>& items, char table, int items_from_table)
{
    
    
    string magic_table_A[8] = { "potion of healing", "spell scroll(cantrip)", "potion of climbing", "spell scroll(1st level)", "spell scroll (2nd level)", "potion of greater healing", "bag of holding", "driftglobe"};
    
    string magic_table_B[35] = {"potion of greater healing", "potion of fire breath", "potion of resistance", "ammunition, +1", "potion of animal friendship", "potion of hill giant strength", "potion of growth", "potion of water breathing", "spell scroll (2nd level)", "spell scroll (3rd level)", "bag of holding", "keoghtom's ointment", "oil of slipperiness", "dust of disappearance", "dust of dryness", "dust of sneezing and choking", "elemental gem", "philter of love", "alchemy jug", "cap of water breathing", "cloak of the manta ray", "driftglobe", "goggles of night", "helm of comprehending languages", "immovable rod", "lantern of revealing", "mariner's armor", "mithral armor", "potion of poison", "ring of swimming", "robe of useful items", "rope of climbing", "saddle of the cavalier", "wand of magic detection", "wand of secrets"};
    
    string magic_table_C[28] = {"potion of superior healing", "spell scroll (4th level)", "ammunition, +2", "potion of clairvoyance", "potion of diminution", "potion of gaseous form", "potion of frost giant strength", "potion of stone giant strength", "potion of heroism", "potion of invulnerability", "potion of mind reading", "spell scroll (5th level)", "elixir of health", "oil of etherealness", "potion of fire giant strength", "quaal's feather token", "scroll of protection", "bag of beans", "bead of force", "chime of opening", "decanter of endless water", "eyes of minute seeing", "floating boat", "heward's handy haversack", "horse shoes of speed", "necklace of fireballs", "periapt of health", "sending stones" };
    
    string magic_table_D[16] = {"potion of supreme healing", "potion of invisibility", "potion of speed", "spell scroll (6th level)", "spell scroll (7th level)", "ammunition, +3", "oil of sharpness", "potion of flying", "potion of cloud giant strength", "potion of longevity", "potion of vitality", "spell scroll (8th level)", "horse shoes of a zephyr", "nolzur's marvelous pigments", "bag of devouring", "portable hole" };
    
    string magic_table_E[7] = {"spell scroll (8th level)", "potion of storm giant strength", "potion of supreme healing", "spell scroll (9th level)", "universal solvent", "arrow of slaying", "sovereign glue"};
    
    //enter last few tables
    string magic_table_F[60] = {"weapon, +1", "shield, +1", "sentinel shield", "amulet of proof against detection and location", "boots of elvenkind", "boots of striding and springing", "bracers of archery", "brooch of shielding", "broom of flying", "cloak of elvenkind", "cloak of protection", "gauntlets of ogre power", "hat of disguise", "javelin of lightning", "pearl of power", "rod of the pact keeper, +1", "slippers of spider climbing", "staff of the adder", "staff pf the python", "sword of vengeance", "trident of fish command", "wand of magic missiles", "want of the war mage, +1", "wand of web", "weapon of warning", "adamantine armor (chain mail)", "adamantine armor (chain shirt)", "adamantine armor (scale mail)", "bag of tricks (gray)", "bag of tricks (rust)", "bag of tricks (tan)", "boots of the winterlands", "circlet of blasting", "decks of illusions", "eversmoking bottle", "eyes of charming", "eyes of the eagle", "figurine of wondrous power (silver raven)", "gem of brightness", "gloves of missile snaring", "gloves of swimming and climbing", "gloves of thievery", "headband of intellect", "helm of telepathy", "instrument of the bards (Doss lute)", "instrument of the bards (fochlucan bandore)", "instrument of the bards (mac-fuimidh cittern)", "medallion of thoughts", "necklace of adaptation", "periapt of wound closure", "pipes of haunting", "pipes of the sewers", "ring of jumping", "ring of mind shielding", "ring of warmth", "ring of water walking", "quiver of ehlonna", "stone of good luck", "wind fan", "winged boots"};
    
    string magic_table_G[88] = { "Weapon, +2", "Figurine of wondrous power", "Adamantine armor (breastplate)", "Adamantine armor (splint)", "Amulet of health", "Armor of vulnerability", "Arrow-catching shield", "Belt of dwarvenkind", "Belt of hill giant strength", "Berserker axe", "Boots of levitation", "Boots of speed", "Bowl of commanding water elementals", "Bracers of defense", "Brazier of commanding fire elementals", "Cape of the mountebank", "Censer of controlling air elementals", "Armor, +1 chain mail", "Armor of resistance (chain mail)", "Armor of resistance (chain shirt)", "Armor,+ 1 chain shirt", "Cloak of displacement", "Cloak of the bat", "Cube of force", "Daern's instant fortress", "Dagger of venom", "Dimensional shackles", "Dragon slayer", "Elven chain", "Flame tongue", "Gem of seeing", "Giant slayer", "Clamoured studded leather", "Helm of teleportation", "Horn of blasting", "Horn of Valhalla (silver or brass)", "Instrument of the bards (Canaithmandolin)", "Instrument ofthe bards (Cii lyre)", "loun stone (awareness)", "loun stone (protection)", "loun stone (reserve)", "loun stone (sustenance)","Iron bands of Bilarro", "Armor, + 1 leather", "Armor of resistance (leather)", "Mace of disruption", "Mace of smiting", "Mace of terror", "Mantle of spell resistance", "Necklace of prayer beads", "Periapt of proof against poison", "Ring of animal influence", "Ring of evasion", "Ring of feather falling", "Ring of free action", "Ring of protection", "Ring of resistance", "Ring of spell storing", "Ring of the ram", "Ring of X-ray vision", "Robe of eyes", "Rod of rulership", "Rod of the pact keeper, +2", "Rope of entanglement", "Armor, +1 scale mail", "Armor of resistance (scale mail)", "Shield, +2", "Shield of missile attraction", "Staff of charming", "Staff of healing", "Staff of swarming insects", "Staff of the woodlands", "Staff of withering", "Stone of controlling earthelementals", "Sun blade", "Sword of life stealing","Sword of wounding", "Tentacle rod", "Vicious weapon", "Wand of binding", "Wand of enemy detection", "Wand of fear", "Wand of fireballs", "Wand of lightning bolts", "Wand of paralysis", "Wand of the war mage, +2", "Wand of wonder", "Wings of flying"};
    
    string magic_table_H[69] = { "weapon, +3", "amulet of the planes", "carpet of flying", "crystal ball (very rare version)", "ring of regeneration", "ring of shooting stars", "ring of telekinesis", "robe of scintillating colors", "robe of stars", "rod of absorption", "rod of alertness", "rod of security", "rod of the pact keeper, +3", "scimitar of speed", "shield, +3", "staff of fire", "saff of frost", "staff of power", "staff of striking", "staff of thunder and lightning", "sword of sharpness", "wand of polymorph", "wand of the war mage, +3", "adamantine armor (half plate)", "adamantine armor (plate)", "animated shield", "belt of fire giant strength", "belt of frost (or stone) giant strength", "armor, +1 breastplate", "armor of resistance (breastplate)", "candle of invocation", "armor, +2 chain mail", "armor, +2 chain shirt", "cloak of arachnida", "dancing sword", "demon armor", "dragon scale mail", "dwarven plate", "dwarven thrower", "efreeti bottle", "figurine of wondrous power (obsidian steed)", "frost brand", "helm of brillinace", "hown of valhalla (bronze)", "instrument of the bards (ansthruthharp)", "loun stone (absorption)", "loun stone (agility)", "loun stone (fortitude)", "loun stone (insight)", "loun stone (intellect)", "loun stone (leadership)", "loun stone (strength)", "armor, +2 leather", "manual of bodiliy health", "manual of gainful exercise", "manual of golems", "manual of quickness of action", "mirror of life trapping", "nine lives stealer", "oathbow", "armor, +2 scale mail", "spellguard shield", "armor, +1 splint", "armor of resistance (splint)", "armor, +1 studded leather", "armor of resistance (studded leather)", "tome of clear thought", "tome of leadership and influence", "tome of understanding" };
    
    //37 with sub table of 7 items
    string magic_table_I[52] = {"defender", "hammer of thunderbolts", "luck blade", "sword of answering", "holy avenger", "ring of djinni summoning", "ring of invisibility", "ring of spell turning", "rod of lordly might", "vorpal sword", "belt of cloud giant strength", "armor, +2 breastplate", "armor, +3 chain mail", "armor, +3 chain shirt", "cloak of invisibility", "crystal ball (legendary version)", "armor, +1 half plate", "iron flask", "armor, +3 leather", "armor, +1 plate", "robe of the archmagi", "rod of resurrection", "armor, +1 scale mail", "scarab of protection", "armor, +2 splint", "armor, +2 studded leather", "well of many worlds", "***magic armor roll***", "apparatus of kwalish", "armor of invulnerability", "belt of storm giant strength", "cubic gate", "deck of many things", "efreeti chain", "armor of resistance (half plate)", "horn of valhalla (iron)", "instrument of the bards (ollamh harp)", "loun stone (greater absorption)", "loun stone (master)", "loun stone (regeneration)", "plate armor of etherealness", "plate armor of resistance", "ring of air elemental command", "ring of earth elemental command", "ring of fire elemental command", "ring of three wishes", "ring of water elemental command", "sphere of annihilation", "talisman of pure good", "talisman of the sphere", "talisman of ultimate evil", "tome of the stilled tongue" };

        
    switch (table) {
        case 'a':
            for (int i = 0; i < items_from_table; ++i) {
                int r = rand() % 8 + 1;
                items.push_back(magic_table_A[r]);
            }
            break;
        case 'b':
            for (int i = 0; i < items_from_table; ++i) {
                int r = rand() % 35 + 1;
                items.push_back(magic_table_B[r]);
            }
            break;
        case 'c':
            for (int i = 0; i < items_from_table; ++i) {
                int r = rand() % 28 + 1;
                items.push_back(magic_table_C[r]);
            }
            break;
        case 'd':
            for (int i = 0; i < items_from_table; ++i) {
                int r = rand() % 16 + 1;
                items.push_back(magic_table_D[r]);
            }
            break;
        case 'e':
            for (int i = 0; i < items_from_table; ++i) {
                int r = rand() % 7 + 1;
                items.push_back(magic_table_E[r]);
            }
            
            break;
        case 'f':
            for (int i = 0; i < items_from_table; ++i) {
                int r = rand() % 60 + 1;
                items.push_back(magic_table_F[r]);
            }
            break;
        case 'g':
            for (int i = 0; i < items_from_table; ++i) {
                int r = rand() % 88 + 1;
                items.push_back(magic_table_G[r]);
            }
            break;
        case 'h':
            for (int i = 0; i < items_from_table; ++i) {
                int r = rand() % 69 + 1;
                items.push_back(magic_table_H[r]);
            }
            break;
        case 'i':
            for (int i = 0; i < items_from_table; ++i) {
                int r = rand() % 52 + 1;
                items.push_back(magic_table_I[r]);
            }
            break;
        default:
            //cout << "Invalid logic error:";
            break;
    }
    
}


void magic_table_logic(vector<string> items ,int times, int type, char table_1, int times_2, int type_2, char table_2)
{
    int items_from_table = 0;
    srand(time(0));
     
    for (int i = 0; i < times; ++i) {
        int r = rand() % type + 1;
        items_from_table += r; //this is the number of items we will get from respective table.
    }
    magic_table(items, table_1, items_from_table);
    
    items_from_table=0;
    for (int i = 0; i < times_2; ++i) {
        int r = rand() % type_2 + 1;
        items_from_table += r;
    }
    magic_table(items, table_2, items_from_table);
    
    
    for (int i = 0; i < items.size(); ++i) {
        cout << "-" << items[i] << endl;
    }
 
    cout << "we got here\n\n";

}
