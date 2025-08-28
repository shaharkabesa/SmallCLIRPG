#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "job.h"
class enemy;
class job;
class player {
	
public:
	player();
	std::string name;
	
	

	

	void shoutName();

	void attack(enemy& enemy);
	void set_player_damage(int dmg);
	int get_player_damage();
	void set_player_health(int health);
	int get_player_health();
	job get_job();
	void set_job(job jobpick);
	

private:
	
	job class_job;
	int level;
	int health;
	int experience;
	int damage;
	int max_health;

};