#pragma once

#include "SFML/Graphics.hpp"


class Level
{
public:
	Level();
	void update();
	void render(sf::RenderWindow &t_window);

	sf::Sprite bgSprite;
	sf::Texture bgTexture;
	sf::Vector2f bgPos{ 0,0 };

	sf::Vector2f platPos1{ 500,500 };
	sf::Vector2f platPos2{ 600,500 };
	sf::Vector2f platPos3{ 700,500 };

	sf::Sprite platformSprite1;
	sf::Sprite platformSprite2;
	sf::Sprite platformSprite3;
	sf::Texture platformText;

	

	~Level();
};

