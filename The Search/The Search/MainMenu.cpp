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



	}
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
	options = true;

}

void MainMenu::advanceToExitGame()
{
	closeGame = true;
}


MainMenu::~MainMenu()
{
}
