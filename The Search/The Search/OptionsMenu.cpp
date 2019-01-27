#include "OptionsMenu.h"



OptionsMenu::OptionsMenu()
{

}

void OptionsMenu::setupText()
{
	overallText.loadFromFile("PinkBazooka.ttf");
	exitMenuText.setFont(overallText);
	exitMenuText.setFillColor(sf::Color::Red);
	exitMenuText.setCharacterSize(76);
	exitMenuText.setPosition({ 350.0f, 150.0f });
	exitMenuText.setString("How to Play");

	controls.setFont(overallText);
	controls.setFillColor(sf::Color::Red);
	controls.setCharacterSize(45);
	controls.setPosition({ 220.0f, 340.0f });
	controls.setString("A or Left arrow to move left\nD  or Right arrow to move right\nSpaceBar to jump\nRight Shift to shoot\n\n Press Backspace to exit");
}



void OptionsMenu::Draw(sf::RenderWindow &t_window)
{
	t_window.draw(controls);
   t_window.draw(exitMenuText);
}

