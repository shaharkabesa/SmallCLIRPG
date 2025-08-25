
#include <iostream>
#include "player.h"
#include <string>
bool turn = true;
player p1;
enemy e1;
int main()
{
   /* Plans
   1. clean up both classes of enemy and player
   2. Create a new class to handle the battlefield instead of this while loop in main
   3. Add more complexity, for now its only you vs monster attack, down the line introduce choice and enemy basic ai this is a turn based game
   
   */


    p1.name = "Shahar";
    e1.enemy_name = "Goblin";
    p1.damage = 1;
    e1.enemy_damage = 2;
    
    std::string winner = "";
    
    p1.shoutName();

    while (true) {
        if (turn) {
            p1.attack(e1);
            turn = false;

        }
        else {
            e1.attack(p1);
            turn = true;
        }

        if (p1.health <= 0) {
            std::cout << "\nPlayer lost the battle" << std::endl;
            winner = p1.name;
            break;
        }

        if (e1.enemy_curr_hp <= 0) {
            std::cout << "\nEnemy lost the battle" << std::endl;
            winner = e1.enemy_name;
            break;
        }
    }
    
    

    return 0;



}

