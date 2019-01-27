#include "MainMenu.h"
class OptionsMenu: public MainMenu
{
private:
   
	sf::Text controls;
	sf::Text exitMenuText;
	sf::Font overallText;

public:
	OptionsMenu();
	void setupText();

	void Draw(sf::RenderWindow & t_window);
	
	
	 
};

