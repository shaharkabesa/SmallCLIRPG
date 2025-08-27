#include "skill.h"

skill::skill(std::string name, std::string description) {
	skill_name = name;
	skill_description = description;
}

void skill::set_skill_damage(int dmg) {
	skill_damage = dmg;
}
int skill::get_skill_damage() {
	return skill_damage;
}