#include "player.h"
#include <iostream>
#include <string>


player::player() {
	name = "";
	profession = "";
	level = 1;
	health = 100;
	experience = 0;
	damage = 5;
	max_health = 100;
	
}
void player::shoutName() {
	std::cout << name << std::endl;
}

void player::attack(enemy& enemy) {
	enemy.enemy_curr_hp -= damage;
	std::cout << name + " Attacked" + " " + enemy.enemy_name + " With " + std::to_string(damage) + " Damage" << std::endl;
	std::cout << enemy.enemy_name + " Has " + std::to_string(enemy.enemy_curr_hp) + "/" + std::to_string(enemy.enemy_max_hp) + " Health left" << std::endl;

}