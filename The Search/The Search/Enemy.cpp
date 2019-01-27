#include "Enemy.h"

Enemy::Enemy()
{
	TextureBox = { 0, 1156, 71, 64 };

	texture.loadFromFile("IMAGES/SpriteSheets/SwordSkeletonSpriteSheet.PNG");
	enemy.setTexture(texture);
	enemy.setTextureRect(TextureBox);
	enemy.setOrigin({ enemy.getGlobalBounds().width, enemy.getGlobalBounds().height / 2 });
	enemy.setPosition({ 1100,720 });
}

void Enemy::update(sf::Vector2f t_playerPos)
{
	playerPos = t_playerPos;
	followingPlayer();
}

void Enemy::render(sf::RenderWindow & t_window)
{
	t_window.draw(enemy);
}

void Enemy::followingPlayer()
{
	if (playerPos.x < position.x)
	{
		position.x -= enemySpeed.x;
	}
	else if (playerPos.x > position.x)
	{
		position.x += enemySpeed.x;
	}
	if (playerPos.y < position.y)
	{
		position.y -= enemySpeed.y;
	}
	else if (playerPos.y > position.y)
	{
		position.y += enemySpeed.y;
	}

	enemy.setPosition(position);
}
