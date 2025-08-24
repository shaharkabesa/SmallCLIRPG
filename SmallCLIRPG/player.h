#pragma once
#include <iostream>

class player {
public:
	player(std::string name, std::string profession, int level, int health, int experience);

private:
	std::string name;
	std::string profession;
	int level;
	int health;
	int experience;
	int damage;

};