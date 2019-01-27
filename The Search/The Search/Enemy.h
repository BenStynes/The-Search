#include <SFML/Graphics.hpp>

class Enemy
{
private:
	sf::Sprite enemy;
	sf::Texture texture;
	sf::IntRect TextureBox;
	sf::Vector2f position{ 1100,720 };
	sf::Vector2f playerPos;
	sf::Vector2f enemySpeed{ 3,3 };

public:
	Enemy();
	void update(sf::Vector2f t_playerPos);
	void render(sf::RenderWindow &t_window);
	void followingPlayer();

};
