#include "MainMenu.h"



MainMenu::MainMenu()
{
}

void MainMenu::setupText()
{

	for (int i = 0; i < MAX_OPTIONS; i++)
	{
	
	}


}

void MainMenu::setupOptionsAndPointers()
{
	for (int i = 0; i < MAX_OPTIONS; i++)
	{

		options[i].setSize({ 220.0f, 80.0f });
		options[i].setFillColor(sf::Color::Red);
		if (i == 0)
		{
			options[i].setPosition({ 400.0f,150.0f });
		}
		if (i == 1)
		{
			options[i].setPosition({ 400.0f,300.0f });
		}
		if (i == 2)
		{
			options[i].setPosition({ 400.0f,450.0f });
		}
	}
	Pointer.setPointCount(3);
	Pointer.setFillColor(sf::Color::Blue);
	Pointer.setPosition({ 200.0f, 150.0f });
	Pointer.setRadius(20);
}

bool MainMenu::getExisting()
{
	return existing;
}

void MainMenu::setExisting(bool t_understandableHaveANiceDay)
{
	existing = t_understandableHaveANiceDay;
}

void MainMenu::advanceToNewGame()
{
	newGame = true;
}

void MainMenu::advanceToOptions()
{
	optionsMenu = true;

}

void MainMenu::advanceToExitGame()
{
	closeMenu = true;
}
void MainMenu::Draw(sf::RenderWindow &t_window)
{
	t_window.draw(Pointer);
	for (int i = 0; i < MAX_OPTIONS; i++)
	{
		t_window.draw(options[i]);
	}
}
