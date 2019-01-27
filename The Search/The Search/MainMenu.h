
#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

int const MAX_OPTIONS = 3;

class MainMenu
{
private:
	sf::Music menuMusic;
	sf::Music gameMusic;
	sf::Music endMusic;

	sf::RectangleShape options[MAX_OPTIONS] ;
	sf::Text menuText[MAX_OPTIONS];
	sf::Text titleText;
	sf::CircleShape optionSelector;
	bool existing{true};
	bool optionsMenu{false};
	bool newGame{ false };
	bool closeGame{ false };
	sf::Font overallText;
	int optionCounterUp;
	int optionCounterDown;

public:
	MainMenu();
	void setupText();
	void setupOptionsAndPointers();
	bool getExisting();
	void setExisting(bool t_showing);
	void advanceToNewGame();
	void advanceToOptions();
	void exitGame();
	void movePointer();
	void Draw(sf::RenderWindow & t_window);
	bool getNewGame();
	bool getOptionsMenu();
	bool getExitGame();
	void returnToMainMenu();
	void setupAudio();
	void playMenuAudio();
	void gameplayAudio();

};

