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


private:
	int skill_damage = 0;
};