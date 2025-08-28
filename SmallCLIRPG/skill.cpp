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

void skill::set_mana_cost(int cost) {
	mana_cost = cost;
}
int skill::get_mana_cost() {
	return mana_cost;
}

void skill::set_stamina_cost(int cost) {
	stamina_cost = cost;
}
int skill::get_stamina_cost() {
	return stamina_cost;
}