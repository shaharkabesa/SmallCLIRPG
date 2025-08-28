#include "stage.h"


stage::stage() {
	stage_description = "";
    winner = "";
}

void stage::battle(enemy& enemy, player& player) {
    while (true) {
        if (turn) {
            player.attack(enemy);
            turn = false;

        }
        else {
            enemy.attack(player);
            turn = true;
        }

        if (player.get_job().get_health() <= 0) {
            std::cout << "\nPlayer lost the battle" << std::endl;
            winner = enemy.enemy_name;
            break;
        }

        if (enemy.enemy_curr_hp <= 0) {
            std::cout << "\nEnemy lost the battle" << std::endl;
            winner = player.name;
            break;
        }
    }
}
