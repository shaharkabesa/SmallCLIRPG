
#include <iostream>
#include "player.h"
#include <string>
#include "stage.h"
#include "job.h"
int main()
{
 
    player p1;
    job warrior("Warrior", "Melee Fighter");
    enemy e1;
    stage st1;
    warrior.set_health(100);
    warrior.set_max_health(100);
    warrior.set_damage(1);
    
    p1.set_job(warrior);

    p1.name = "Shahar";
    e1.enemy_name = "Goblin";

    e1.enemy_damage = 2;
    
    
    p1.shoutName();
    
    st1.battle(e1, p1);
    
    

    return 0;



}

