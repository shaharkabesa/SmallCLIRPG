#include "enemy.h"
#include "string"
#include "player.h"
/* Fix a bug where player helath is not reduced */
enemy::enemy() {
	enemy_name = "";
	enemy_damage = 2;
	enemy_max_hp = 20;
	enemy_curr_hp = 20;


	
}

void enemy::attack(player& player){
	int newhealth = player.get_job().get_health() - enemy_damage;
	std::cout << newhealth << std::endl;
	player.get_job().set_health(newhealth);

	std::cout << enemy_name + " Attacked" + " " + player.name + " With " + std::to_string(enemy_damage) + " Damage" << std::endl;
	std::cout << player.name + " Has " + std::to_string(player.get_job().get_health()) + "/" + std::to_string(player.get_job().get_health()) + " Health left" << std::endl;
}