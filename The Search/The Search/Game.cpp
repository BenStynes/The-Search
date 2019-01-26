#include "Game.h"

Game::Game() :
	m_window{ sf::VideoMode{ 1200, 800, 32 }, "Basic Game" },
	m_exitGame{ false }
{

}

Game::~Game()
{

}

void Game::run()
{
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	const float FPS = 60.0f;
	title.setupOptionsAndPointers();
	sf::Time timePerFrame = sf::seconds(1.0f / FPS); // 60 fps
	while (m_window.isOpen())
	{
		processEvents(); // Run as many times as possible
		timeSinceLastUpdate += clock.restart();
		if (timeSinceLastUpdate > timePerFrame)
		{
			timeSinceLastUpdate -= timePerFrame;
			update(timePerFrame); // 60 fps
			processEvents(); // Run at a minimum of 60 fps
		}
		render(); // Run as many times as possible
	}
}

void Game::processEvents()
{
	sf::Event nextEvent;
	while (m_window.pollEvent(nextEvent))
	{
		if (sf::Event::Closed == nextEvent.type) // check if the close window button is clicked on.
		{
			m_window.close();
		}
		if (m_player.getPosition().y < 400)
		{
			m_player.setPlayerSpeed(m_GRAVITY);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			m_player.setPlayerSpeed({ -5,0 });
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			m_player.setPlayerSpeed({ 5,0 });
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && !currentState.Space || prevoiusState.Space)
		{
			currentState.Space = true;
			prevoiusState.Space = false;
			m_player.setPlayerSpeed({ 0,-50 });
		}
		if (m_player.getPosition().y >= 400)
		{
			m_player.setPosition({ m_player.getPosition().x, 400.0f });
			currentState.Space = false;
		}
	}
}

void Game::update(sf::Time t_deltaTime)
{
	m_player.update();

	if (m_exitGame)
	{
		m_window.close();
	}
}

void Game::render()
{
	m_window.clear();
	m_player.render(m_window);
	m_level.render(m_window);
	title.Draw(m_window);
	m_window.display();
}

