/*
	Player.h
	@author Christopher Bell
	@updated Dec 23, 2014

	The purpose of this class is to outline the stats and
	abilities of the player.
*/
#ifndef PLAYER_H
#define PLAYER_H

class Player
{
private:
	int level;

	/* 
			The amount it takes to level up the player. It will
			always be equal to player_level*5.
		*/
	int experience_points;

	/*
			The following variables will be the main
			stats of the player. These stats will be directly
			effected by the player's level. Meaning that they will
			only increase as the player's level increases.
		*/
	int agility;
	int health;
	int stamina;
	int strength;

	/*
			The following variables will represent the level
			in each skill in the game.
		*/
	int fishing_level[2];
	int food_checking_level[2]; //This determines if food is poison.
	int hunting_level[2];
	int wood_cutting_level[2];

	/*
			Percentage to Gather
			Will be 5 * the level of the player
		*/
	int percentage_to_gather;

	/*
			Inventory
			inventory[0] = Wood Collection
			inventory[1] = Food Collection
		*/
	int inventory[3];

public:
	Player();
	int get_food_checking_level();
	int get_fishing_level();
	int get_hunting_level();
	int get_wood_cutting_level();
	int get_agility();
	int get_experience_points(int sub_stat[]);
	int get_health();
	int get_level();
	int get_stamina();
	int get_strength();

	void player_level_up(int stat[]);
	void reset_experience_points();
};

#endif