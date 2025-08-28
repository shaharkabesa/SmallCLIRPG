#include "skill.h"
#include "job.h"
#include "vector"
#include "iostream"

job::job() {

}
job::job(std::string name, std::string description) {
	job_name = name;
	job_description = description;
}

/* Getters */
int job::get_damage() {
	return damage;
}

int job::get_health() {
	return health;
}

int job::get_mana() {
	return mana;
}

std::vector<skill> job::get_skills() {
	return skillbook;
}

int job::get_stamina() {
	return stamina;
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

void job::add_skill(skill ability) {
	skillbook.push_back(ability);
}