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
	}


	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		fsm.jumping();
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		fsm.climbing();
	}
	else
	{
		fsm.idle();
	}
}

void Game::draw()
{
	window.clear();
	window.display();
}
