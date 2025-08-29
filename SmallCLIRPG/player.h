#pragma once


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

	void actionpick(enemy& enemy);

	

private:
	
	job class_job;
	int level;
	int experience;
	

};