#include "SFML/Graphics.hpp"

class Player
{
private:
	int health{};
	int blood{};

	sf::Vector2f position{600,400};
	sf::Vector2f previousPos{ 600,400 };
	bool attacked{false};
	bool cutscene{false};
	sf::Vector2f playerSpeed{0,0};
	sf::Vector2f jumpSpeed{ 0,0 };
	sf::Sprite player;
	sf::Texture texture;
	sf::IntRect textureBox;

	bool currentState{ false };
	bool previousState{ false };

public:		
	Player();
	void update();
	void render(sf::RenderWindow &t_window);
	int getHealth();
	void setHealth(int t_playerHealth);
	sf::Vector2f getPlayerSpeed();
	sf::Vector2f getPosition();
	void setPosition(sf::Vector2f t_pos);
	void setPlayerSpeed(sf::Vector2f t_playerSpeed);

};