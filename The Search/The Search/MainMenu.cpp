#include "MainMenu.h"



MainMenu::MainMenu()
{
	optionCounterUp = 0;
	optionCounterDown = 0;

}

void MainMenu::setupText()
{
	overallText.loadFromFile("polla.ttf");
	titleText.setFont(overallText);
	titleText.setFillColor(sf::Color::White);
	titleText.setCharacterSize(56);
	titleText.setPosition({ 200.0f, 150.0f });
	titleText.setString("The Search My anal cavity");
	for (int i = 0; i < MAX_OPTIONS; i++)
	{
		menuText[i].setFont(overallText);
		menuText[i].setCharacterSize(43);
		menuText[i].setFillColor(sf::Color::White);
		switch (i)
		{
		case 0:
		    menuText[i].setPosition({ 400.0f,300.0f });
			menuText[i].setString("New Game");

			break;
		case 1:
			menuText[i].setPosition({ 400.0f,450.0f });
			menuText[i].setString("Options");

			break;
		case 2:
			menuText[i].setPosition({ 400.0f,600.0f });
			menuText[i].setString("Kill Self");

			break;
		}
	}


}

void MainMenu::setupOptionsAndPointers()
{
	
	optionSelector.setPointCount(3);
	optionSelector.setFillColor(sf::Color::Blue);
	optionSelector.setPosition({ 200.0f, 300.0f });
	optionSelector.setRadius(40);
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
	existing = false;
}

void MainMenu::advanceToOptions()
{
	optionsMenu = true;
	existing = false;
}

void MainMenu::advanceToExitGame()
{
	closeMenu = true;
	existing = false;
}
void MainMenu::movePointer()
{
	
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			switch (optionCounterDown)
			{
			default:
				optionCounterDown = 0;
				optionSelector.setPosition(optionSelector.getPosition().x, menuText[optionCounterDown].getPosition().y);
				break;
			case 0:
				optionSelector.setPosition(optionSelector.getPosition().x, menuText[optionCounterDown].getPosition().y);
				optionCounterDown++;
				break;
			case 1:
				optionSelector.setPosition(optionSelector.getPosition().x, menuText[optionCounterDown].getPosition().y);
				optionCounterDown++;
				break;
			case 2:
				optionSelector.setPosition(optionSelector.getPosition().x, menuText[optionCounterDown].getPosition().y);
				optionCounterDown++;
				break;
			}
			
		}
		
	
}
void MainMenu::Draw(sf::RenderWindow &t_window)
{
	t_window.draw(titleText);
	t_window.draw(optionSelector);
	for (int i = 0; i < MAX_OPTIONS; i++)
	{
		t_window.draw(menuText[i]);
		t_window.draw(options[i]);
	}
}
