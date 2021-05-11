#include "Player.h"

Player::Player() {
	player_level = 1;
	amount_to_level = 5;
}

int Player::get_food_checking_level() {
	return food_checking_level[0];
}

int Player::get_fishing_level() {
	return fishing_level[0];
}

int Player::get_hunting_level() {
	return hunting_level[0];
}

int Player::get_wood_cutting_level() {
	return wood_cutting_level[0];
}

int Player::get_player_agility() {
	return player_agility[0];
}

int Player::get_player_experience_points(int sub_stat[]) {
	return sub_stat[1];
}

int Player::get_player_health() {
	return player_health;
}

int Player::get_player_level() {
	return player_level;
}

int Player::get_player_stamina() {
	return player_stamina;
}

int Player::get_player_strength() {
	return player_strength;
}

void Player::player_level_up() {
	if(stat[1] == amount_to_level) {
		return player_level[0]++;
	}
	else {
		return player_level[0];
	}
}

void Player::reset_amount_to_level() {
	amount_to_level = player_level * 5;
}



