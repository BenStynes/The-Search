#include "Level.h"



Level::Level()
{
	bgTexture.loadFromFile("IMAGES/hell.png");
	bgSprite.setTexture(bgTexture);
	bgSprite.setPosition(bgPos);

	platformText.loadFromFile("IMAGES/Platforms/Brick.png");
	platformSprite1.setTexture(platformText);
	platformSprite2.setTexture(platformText);
	platformSprite3.setTexture(platformText);

	platformSprite1.setPosition(platPos1);
	platformSprite2.setPosition(platPos2);
	platformSprite3.setPosition(platPos3);
	
}

void Level::update()
{
}

void Level::render(sf::RenderWindow & t_window)
{
	t_window.draw(bgSprite);
	t_window.draw(platformSprite1);
	t_window.draw(platformSprite2);
	t_window.draw(platformSprite3);
}


Level::~Level()
{
}
