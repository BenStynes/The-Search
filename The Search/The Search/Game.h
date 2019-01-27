
#ifndef GAME
#define GAME

#include <SFML/Graphics.hpp>
#include "Player.h"
#include "MainMenu.h"
#include "OptionsMenu.h"
const sf::Vector2f  m_GRAVITY = { 0.0f,9.8f };

class Game
{
public:

	Game();
	~Game(); 
	
	void run();
	
private:
	MainMenu title;
	OptionsMenu howToPlay;
	void processEvents();
	void update(sf::Time t_deltaTime);
	void render();

	sf::RenderWindow m_window;
	bool m_exitGame;

	bool inGame = false;

	Player m_player;
	struct controlState
	{
		bool Left = false;
		bool Right = false;
		bool Space = false;
		bool mouseClick = false;
	};

	controlState currentState;
	controlState prevoiusState;

	sf::Sprite gameScreen;
	sf::Texture gameTexture;

};

#endif // !GAME
