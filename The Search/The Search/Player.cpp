#include "Player.h"

sf::Vector2f const m_GRAVITY = { 0.0f,9.8f };

Player::Player()
{

	health = { 3 };
	blood = { 0 };
	position = {600,400};
    attacked = { false };
	cutscene = { false };

	texture.loadFromFile("IMAGES/Player.png");
	player.setTexture(texture);
	player.setPosition(position);


}

void Player::update()
{
	if (position.y < 400)
	{
		position += m_GRAVITY;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		playerSpeed = { -5.0f,0.0f };
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		playerSpeed = { 5.0f,0.0f };
	}
	else
	{
		playerSpeed = { 0,0 };
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{
		jumpSpeed = { 0.0f,-50.0f };
	}
	else if(!sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{
		jumpSpeed = { 0,0 };
	}
	if (position.y >= 400)
	{
		position = { position.x, 400.0f };
	}
	if (position.y <= 400)
	{
		position.y += jumpSpeed.y;
	}
	if (position.x >= 0 || position.x <= 1200)
	{
		position.x += playerSpeed.x;
	}
	player.setPosition(position);

}

void Player::render(sf::RenderWindow & t_window)
{
	t_window.draw(player);
}

int Player::getHealth()
{
	return health;

}

void Player::setHealth(int t_playerHealth)
{
	health = t_playerHealth;

}

sf::Vector2f Player::getPlayerSpeed()
{
	return playerSpeed ;
}

sf::Vector2f Player::getPosition()
{
	return position;
}

void Player::setPosition(sf::Vector2f t_pos)
{
	position = t_pos;
}

void Player::setPlayerSpeed(sf::Vector2f t_playerSpeed)
{
	playerSpeed = t_playerSpeed;
}
