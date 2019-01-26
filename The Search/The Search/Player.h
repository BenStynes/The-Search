#include "Game.h"

class Player
{

	int health{};
	int blood{};
	sf::Vector2f postion{};
	bool attacked{};
	bool cutscene{};
	int playerSpeed{};
	sf::Sprite player{};
	public:
		
		Player();
		int getHealth();
		void setHealth(int t_playerHealth);
		void playerMovement();
		int getPlayerSpeed();
		void setPlayerSpeed(int t_playerSpeed);
		


		







};