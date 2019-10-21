#include "Game.h"

Game::Game() : window(sf::VideoMode(800, 600), "Practicle 3")
{
}

void Game::run()
{
	while (window.isOpen())
	{
		update();
		draw();
	}
}

void Game::update()
{
	sf::Event event;

	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window.close();

		switch (event.key.code)
		{
		case sf::Keyboard::Up:
			fsm.jumping();

			break;
		case sf::Keyboard::Left:
			fsm.climbing();

			break;
		case sf::Keyboard::Right:
			fsm.idle();

			break;
		default:
			break;
		
		}
	}
}

void Game::draw()
{
	window.clear();
	window.display();
}
