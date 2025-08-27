#pragma once
#include <string>
#include <iostream>

class skill {
public:
	skill(std::string skill_name, std::string skill_description);
	std::string skill_name = "";
	std::string skill_description = "";
	

	int get_skill_damage();
	void set_skill_damage(int dmg);
	int get_mana_cost();
	void set_mana_cost(int cost);
	int get_stamina_cost();
	void set_stamina_cost(int cost);

private:
	int skill_damage = 0;
	int mana_cost = 0;
	int stamina_cost = 0;
};