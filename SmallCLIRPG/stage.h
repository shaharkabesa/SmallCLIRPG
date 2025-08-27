#pragma once
#include <iostream>
#include <string>
#include "enemy.h"
#include "player.h"

class stage {
public:
	stage();
	std::string stage_description;
	bool turn = true;
	std::string winner;

	void battle(enemy& enemy, player& player);




};