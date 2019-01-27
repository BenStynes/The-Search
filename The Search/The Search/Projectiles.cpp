#include "Projectiles.h"

Arrow::Arrow(sf::Texture t_spriteTexture) :
	texture(t_spriteTexture)
{
	arrow.setTexture(texture);
	sf::IntRect textureBox = { 70, 120, 6, 9 };
	arrow.setTextureRect(textureBox);
	arrow.setOrigin(textureBox.width / 2.0, textureBox.height / 2.0);
	arrow.setPosition({ 0, 0 });
}

void Arrow::render(sf::RenderWindow & t_window)
{
	if (exists)
	{
		if (direction)
		{
			arrow.setPosition(arrow.getPosition().x - 1, arrow.getPosition().y);
		}
		else
		{
			arrow.setPosition(arrow.getPosition().x + 1, arrow.getPosition().y);
		}

		t_window.draw(arrow);
		auto & sprite = arrow;
		t_window.draw(sprite);
	}
}

sf::Vector2f Arrow::getPosition()
{
	return arrow.getPosition();
}

bool Arrow::isExisting()
{
	return exists;
}

void Arrow::setExistance(bool t_existing)
{
	exists = t_existing;
}

void Arrow::shot(sf::Vector2f t_bowPos, int t_bowLenght)
{
	exists = true;
	m_bowLenght = t_bowLenght;
	m_bowPos = { t_bowPos.x, t_bowPos.y };
	if (direction)
	{
		arrow.setPosition(t_bowPos.x + t_bowLenght, t_bowPos.y + t_bowLenght - 10);
	}
}

void Arrow::update()
{
	if (arrow.getPosition().x < 0 || arrow.getPosition().x > 1440 || arrow.getPosition().y < 0 || arrow.getPosition().y > 990)
	{
		resetArrow();
	}
}

void Arrow::resetArrow()
{
	exists = false;
}

sf::Sprite Arrow::getSprite()
{
	return arrow;
}

void Arrow::setDirection(bool t_left)
{
	direction = t_left;
}
