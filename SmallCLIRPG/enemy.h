#pragma once
#include <iostream>
class player;

class enemy {
public:
	enemy();
	std::string enemy_name;
	int enemy_damage;
	int enemy_max_hp;
	int enemy_curr_hp;


	
	void attack(player& player_attacked);
	
};