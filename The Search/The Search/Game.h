
#ifndef GAME
#define GAME

#include <SFML/Graphics.hpp>
#include "Player.h"
sf::Vector2f const m_GRAVITY = { 0,9.8 };
#include "MainMenu.h"


class Game
{
public:

	Game();
	~Game(); 
	
	void run();
	
private:
	MainMenu title;
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
