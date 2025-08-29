#include "player.h"
#include <iostream>
#include <string>
#include "enemy.h"
#include <stdexcept>


class job;
player::player() {
	name = "";
	level = 1;
	experience = 0;
	
	
	

	
}
void player::shoutName() {
	std::cout << name << std::endl;
}


job& player::get_job() {
	return class_job;
}

void player::set_job(job& job_pick) {
	class_job = job_pick;
}



void player::attack(enemy& enemy) {
	int player_damage = class_job.get_damage();
	std::string enemy_name = enemy.enemy_name;
	enemy.enemy_curr_hp -= player_damage;

	std::cout << enemy_name + " Took  " + std::to_string(player_damage) + " Damage" + "\n";

	std::cout << enemy_name + " Has " + std::to_string(enemy.enemy_curr_hp) + "/" + std::to_string(enemy.enemy_max_hp) + " Current HP" + "\n";

}

void player::actionpick(enemy& enemy) {
	std::string answer;
	int choice = 0;
	bool inputVaild = false;
	

	while (!inputVaild) {
		std::cout << "Pick Action:" << "\n";
		std::cout << "1) Normal Attack" << "\n";
		std::cout << "2) Skill" << "\n\n";
		
		std::getline(std::cin, answer);
		try {
			choice = std::stoi(answer);
			inputVaild = true;

		}
		catch (const std::invalid_argument& e) {
			std::cerr << "Error Used a string instead of number or anything else" << "\n\n";
			inputVaild = false;
		}
		catch (const std::out_of_range& e) {
			std::cerr << "Error Used a number out of range" << "\n\n";
			inputVaild = false;
		}

		if (choice < 1 || choice > 2) {
			inputVaild = false;
		}
	}
	


	

	
	if (choice == 1) {
		attack(enemy);

	}


	if (choice == 2) {
		class_job.use_skill(enemy);

	}
	
	
}