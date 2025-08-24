#include "player.h"
#include <iostream>



player::player() {
	name = "";
	profession = "";
	level = 1;
	health = 100;
	experience = 0;
	damage = 5;
	
}
void player::shoutName() {
	std::cout << name << std::endl;
}