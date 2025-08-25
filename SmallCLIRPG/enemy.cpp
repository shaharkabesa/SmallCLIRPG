#include "enemy.h"
#include "string"
#include "player.h"

enemy::enemy() {
	enemy_name = "";
	enemy_damage = 2;
	enemy_max_hp = 20;
	enemy_curr_hp = 20;


	
}

void enemy::attack(player& player){
	player.health -= enemy_damage;

	std::cout << enemy_name + " Attacked" + " " + player.name + " With " + std::to_string(enemy_damage) + " Damage" << std::endl;
	std::cout << player.name + " Has " + std::to_string(player.health) + "/" + std::to_string(player.max_health) + " Health left" << std::endl;
}