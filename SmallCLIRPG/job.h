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

	int get_damage() const;
	void set_damage(int dmg);
	int get_health() const;
	void set_health(int hp);
	int get_mana() const;
	void set_mana(int mp);
	int get_stamina() const;
	void set_stamina(int sp);
	int get_max_health() const;
	void set_max_health(int maxhp);

	std::vector<skill> get_skills();
	void add_skill(skill& ability);
	

private:
	std::string job_name;
	std::string job_description;
	std::vector<skill> skillbook;
	int damage = 0;
	int health = 0;
	int mana = 0;
	int stamina = 0;
	int max_health = 0;
};
