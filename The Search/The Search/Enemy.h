#include <SFML/Graphics.hpp>

class Enemy
{
private:
	sf::Sprite enemy;
	sf::Texture texture;
	sf::IntRect TextureBox;
	sf::Vector2f position;

public:
	Enemy();
	void update(sf::Vector2f t_playerPos);
	void render(sf::RenderWindow &t_window);

};
