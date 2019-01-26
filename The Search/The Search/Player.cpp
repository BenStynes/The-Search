#include "Player.h"

Player::Player()
{

	health = { 3 };
	blood = { 0 };
	postion = { };
    attacked = { false };
	cutscene = { false };


}

int Player::getHealth()
{
	return health;

}

void Player::setHealth(int t_playerHealth)
{
	health = t_playerHealth;

}


int Player::getPlayerSpeed()
{
	return playerSpeed ;
}

void Player::setPlayerSpeed(int t_playerSpeed)
{
	playerSpeed = t_playerSpeed;
}
