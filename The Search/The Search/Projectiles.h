#include <SFML/Graphics.hpp>

class Arrow
{
private:
	sf::Sprite arrow;
	sf::Texture texture;
	sf::Vector2f arrowPos;
	sf::Vector2f enemyPos;
	bool exists{ false };
	int m_bowLenght;
	sf::Vector2f m_bowPos;
	bool direction;

public:
	Arrow(sf::Texture t_spriteTexture);
	void update();
	void render(sf::RenderWindow & window);
	sf::Vector2f getPosition();
	bool isExisting();// draws the bullet only when displayed on window
	void setExistance(bool t_existing);
	void shot(sf::Vector2f t_bowPos, int t_bowLenght);
	void resetArrow();
	sf::Sprite getSprite();
	void setDirection(bool t_left);

};