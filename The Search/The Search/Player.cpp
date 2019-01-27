#include "Player.h"

sf::Vector2f const m_GRAVITY = { 0.0f,5.0f };

Player::Player()
{

	textureBox = {0,1156,71,64};

	health = { 3 };
	blood = { 0 };
	position = {600,720};
    attacked = { false };
	cutscene = { false };

	texture.loadFromFile("IMAGES/SpriteSheets/PlayerBowSpriteSheet.PNG");
	player.setTexture(texture,true);
	player.setTextureRect(textureBox);
	player.setOrigin({ player.getGlobalBounds().width, player.getGlobalBounds().height / 2 });
	player.setPosition(position);

}

void Player::update()
{
	jumpSpeed += m_GRAVITY;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
			playerSpeed = { -7.5f,0.0f };
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		playerSpeed = { 7.5f,0.0f };
	}
	else
	{
		playerSpeed = { 0,0 };
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{
		if (previousState != true && jumpSpeed.y > -1)
		{
			currentState = true;
			jumpSpeed = { 0.0f,-25.0f };
			position.y += -1.0f;
		}
	}

	if (position.y < 720)
	{
		position.y += jumpSpeed.y;
	}

	if (position.y >= 720)
	{
		currentState = false;
		position = { position.x, 720.0f };
	}

	if (position.x >= 0 || position.x <= 1200)
	{
		position.x += playerSpeed.x;
	}
	player.setPosition(position);
	previousState = currentState;
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
