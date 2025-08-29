#include "skill.h"
#include "job.h"
#include "vector"
#include "iostream"
#include "enemy.h"
#include <stdexcept>
job::job() {

}
job::job(std::string name, std::string description) {
	job_name = name;
	job_description = description;
	
}

/* Getters */
int job::get_damage() const {
	return damage;
}

int job::get_health() const {
	return health;
}

int job::get_mana() const {
	return mana;
}

std::vector<skill> job::get_skills() {
	return skillbook;
}

int job::get_stamina() const {
	return stamina;
}

int job::get_max_health() const {
	return max_health;
}

/* Setters */

void job::set_damage(int dmg) {
	damage = dmg;
}

void job::set_health(int hp) {
	health = hp;
}

void job::set_mana(int mp) {
	mana = mp;
}

void job::set_stamina(int sp) {
	stamina = sp;
}

void job::set_max_health(int maxhp) {
	max_health = maxhp;
}

void job::add_skill(skill& ability) {
	skillbook.push_back(ability);

}
/* Active Functions */

void job::use_skill(enemy& enemy) {
	std::string answer;
	std::string enemy_name = enemy.enemy_name;
	int skilldamage = 0;
	int choice = 0;
	bool validInput = false;

	
	while (!validInput) {
		std::cout << "\nSkill menu: " << "\n\n";
		for (int i = 0; i < skillbook.size(); i++) {
			std::cout << std::to_string(i + 1) + ") " + skillbook[i].skill_name + "\n";
		}
		std::cout << "\nPick a skill by the numbers only" << "\n\n";
		std::getline(std::cin, answer);
		try {
			choice = std::stoi(answer) - 1;
			


		}
		catch (const std::out_of_range& e) {
			std::cerr << "Pick something from the menu not out of it" << "\n\n";
			validInput = false;

		}
		catch (const std::invalid_argument& e) {
			std::cerr << "Pick something from the menu not out of it" << "\n\n";
			validInput = false;
		}




		try {
			skilldamage = skillbook.at(choice).get_skill_damage();
			validInput = true;
		}
		catch (const std::out_of_range& e) {
			std::cerr << "Pick something in range" << std::endl;
			validInput = false;
		}
		
	}
	
	
	enemy.enemy_curr_hp -= skilldamage;

	std::cout << enemy_name + " Took  " + std::to_string(skilldamage) + " Damage" + "\n";

	std::cout << enemy_name + " Has " + std::to_string(enemy.enemy_curr_hp) + "/" + std::to_string(enemy.enemy_max_hp) + " Current HP" + "\n";

	
	

}
