
#include <iostream>
#include "player.h"
#include <string>
#include "stage.h"

int main()
{
   /* Plans
   1. clean up both classes of enemy and player
   2. Create a new class to handle the battlefield instead of this while loop in main
   3. Add more complexity, for now its only you vs monster attack, down the line introduce choice and enemy basic ai this is a turn based game
   
   */
    player p1;
    enemy e1;
    stage st1;

    p1.name = "Shahar";
    e1.enemy_name = "Goblin";
    p1.damage = 1;
    e1.enemy_damage = 2;
    
    
    p1.shoutName();
    
    st1.battle(e1, p1);
    
    

    return 0;



}

