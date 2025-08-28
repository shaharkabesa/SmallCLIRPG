#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "job.h"
class enemy;

class player {
	
public:
	player();
	std::string name;
	
	

	

	void shoutName();

	void attack(enemy& enemy);

	job& get_job();
	void set_job(job& jobpick);
	

private:
	
	job class_job;
	int level;
	int experience;
	

};