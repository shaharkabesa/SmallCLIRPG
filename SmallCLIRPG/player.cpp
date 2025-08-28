#include "player.h"
#include <iostream>
#include <string>
#include "enemy.h"
class job;
player::player() {
	name = "";
	level = 1;
	experience = 0;
	
	
	

	
}
void player::shoutName() {
	std::cout << name << std::endl;
}

void player:: attack(enemy& enemy) {
	enemy.enemy_curr_hp -= class_job.get_damage();
	std::cout << name + " Attacked" + " " + enemy.enemy_name + " With " + std::to_string(class_job.get_damage()) + " Damage" << std::endl;
	std::cout << enemy.enemy_name + " Has " + std::to_string(enemy.enemy_curr_hp) + "/" + std::to_string(enemy.enemy_max_hp) + " Health left" << std::endl;

}


job& player::get_job() {
	return class_job;
}

void player::set_job(job& job_pick) {
	class_job = job_pick;
}