
#ifndef GAME
#define GAME
// pete
#include <SFML/Graphics.hpp>
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

	
};

#endif // !GAME
