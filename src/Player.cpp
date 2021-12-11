#include "Player.h"

Player::Player()
{
	level = 1;
	experience_points = 5;
}

int Player::get_food_checking_level()
{
	return food_checking_level[0];
}

int Player::get_fishing_level()
{
	return fishing_level[0];
}

int Player::get_hunting_level()
{
	return hunting_level[0];
}

int Player::get_wood_cutting_level()
{
	return wood_cutting_level[0];
}

int Player::get_agility()
{
	return agility;
}

int Player::get_experience_points(int sub_stat[])
{
	return experience_points;
}

int Player::get_health()
{
	return health;
}

int Player::get_level()
{
	return level;
}

int Player::get_stamina()
{
	return stamina;
}

int Player::get_strength()
{
	return strength;
}

// void Player::player_level_up()
// {
// 	if (stat[1] == amount_to_level)
// 	{
// 		return level[0]++;
// 	}
// 	else
// 	{
// 		return level[0];
// 	}
// }

// void Player::reset_amount_to_level()
// {
// 	amount_to_level = level * 5;
// }
