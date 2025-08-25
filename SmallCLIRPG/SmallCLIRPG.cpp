
#include <iostream>
#include "player.h"
#include <string>
bool turn;
player p1;
enemy e1;
int main()
{
   


    p1.name = "Shahar";
    e1.enemy_name = "Goblin";
    p1.damage = 0.5;
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

