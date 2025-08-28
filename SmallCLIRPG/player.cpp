#include "player.h"
#include <iostream>
#include <string>
#include "enemy.h"
class job;
player::player() {
	name = "";

	level = 1;
	health = 100;
	experience = 0;
	damage = 5;
	max_health = 100;
	

	
}
void player::shoutName() {
	std::cout << name << std::endl;
}

void player:: attack(enemy& enemy) {
	enemy.enemy_curr_hp -= class_job.get_damage();
	std::cout << name + " Attacked" + " " + enemy.enemy_name + " With " + std::to_string(class_job.get_damage()) + " Damage" << std::endl;
	std::cout << enemy.enemy_name + " Has " + std::to_string(enemy.enemy_curr_hp) + "/" + std::to_string(enemy.enemy_max_hp) + " Health left" << std::endl;

}

void player::set_player_damage(int dmg) {
	damage = dmg;
}

int player::get_player_damage() {
	return damage;
}

void player::set_player_health(int hp) {
	health = hp;
}

int player::get_player_health() {
	return health;
}

job player::get_job() {
	return class_job;
}

void player::set_job(job job_pick) {
	class_job = job_pick;
}