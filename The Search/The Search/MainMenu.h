
#pragma once
#include <SFML/Graphics.hpp>
int const MAX_OPTIONS = 3;

class MainMenu
{
private:

	sf::RectangleShape options[MAX_OPTIONS] ;
	sf::Text menuText[MAX_OPTIONS];
	sf::Text titleText;
	sf::CircleShape Pointer;
	bool existing;
	bool optionsMenu;
	bool newGame;
	bool closeMenu;


public:
	MainMenu();
	void setupText();
	void setupOptionsAndPointers();
	bool getExisting();
	void setExisting(bool t_understandableHaveANiceDay);
	void advanceToNewGame();
	void advanceToOptions();
	void advanceToExitGame();

	void Draw(sf::RenderWindow & t_window);

};

