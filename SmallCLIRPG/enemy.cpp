#include "enemy.h"
#include "string"
#include "player.h"

enemy::enemy() {
	enemy_name = "";
	enemy_damage = 2;
	enemy_max_hp = 20;
	enemy_curr_hp = 20;


	
}

void enemy::attack(player& player_attacked){
	player_attacked.health -= enemy_damage;

	std::cout << enemy_name + " Attacked" + " " + player_attacked.name + " With " + std::to_string(enemy_damage) + " Damage" << std::endl;
	std::cout << player_attacked.name + " Has " + std::to_string(player_attacked.health) + "/" + std::to_string(player_attacked.max_health) + " Health left";
}