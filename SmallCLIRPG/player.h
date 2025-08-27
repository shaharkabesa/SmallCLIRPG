#pragma once
#include <iostream>
#include "enemy.h"

class enemy;

class player {
public:
	player();
	std::string name;
	std::string profession;
	int level;
	int health;
	int experience;
	int damage;
	int max_health;
	void shoutName();

	void attack(enemy& enemy);
private:


};