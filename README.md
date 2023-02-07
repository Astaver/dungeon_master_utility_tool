# dungeon_master_utility_tool
console DM tool to allow for rapid generation of loot using c++ native libraries.

The primary problem I am attempting to solve is to streamline the generation of loot for 5th edition of Dungeons and Dragons.

To summarize the problem every encounter in DND has a associated challange raiting that is scaled 1-4, 5-10, 11-16, 17+.
Based on the challange raiting involved decides how many of various types of dice will be rolled n number of times to generate a range of loot.

This loot spans currency, gem || art objects, and finally magic items.

For example, say I want a challange raiting on 10 rolled. 
THe following computations must occur:
1. a challange raiting on 10 is inputed and a random int 1-100 is rolled. 
2. Based on the result of the d100 we will deside our roll values. Lets say we rolled 35.
3. Apply the following logic and store results 
  a. 2d6 X 100  copper coins will be generated
  b. 2d6 X 1000 silver coins will be generated
  c. 6d6 X 100  gold coins will be generated
  d. 3d6 x 10   platinum coins will be generated. 
  e. 3d6 of 50 gp value gems will be generated 
  f. 1d6 roles on Magic Item Table A will be selected. 
 4. For currency and gem||art generation, a direct cout is applied.
 5. For magic items, which are saved in a vector, iterate the vector and cout the looted magic items.
  
