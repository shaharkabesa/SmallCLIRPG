#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "skill.h"
class skill;

class job {
public:
	job(std::string name, std::string description);
	job();

	int get_damage();
	void set_damage(int dmg);
	int get_health();
	void set_health(int hp);
	int get_mana();
	void set_mana(int mp);
	int get_stamina();
	void set_stamina(int sp);

	std::vector<skill> get_skills();
	void add_skill(skill ability);
	

private:
	std::string job_name;
	std::string job_description;
	std::vector<skill> skillbook;
	int damage = 0;
	int health = 0;
	int mana = 0;
	int stamina = 0;

};
