#include "skill.h"
#include "job.h"
#include "vector"
#include "iostream"

job::job() {

}
job::job(std::string name, std::string description) {
	job_name = name;
	job_description = description;
	max_health = health;
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