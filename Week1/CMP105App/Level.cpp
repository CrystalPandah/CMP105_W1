#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect2.setSize(sf::Vector2f(100, 100));
	rect2.setPosition(556, 340);
	rect2.setFillColor(sf::Color::Red);

	rect1.setSize(sf::Vector2f(60, 60));
	rect1.setPosition(566, 350);
	rect1.setFillColor(sf::Color::Green);

	rect.setSize(sf::Vector2f(20, 20));
	rect.setPosition(576, 360);
	rect.setFillColor(sf::Color::Blue);

	rect3.setSize(sf::Vector2f(40, 40));
	//rect3.setPosition(1125, 600);
	rect3.setFillColor(sf::Color::Green);

	// Render text
	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout << "error loading font\n";
	}

	text.setFont(font);
	text.setString("Hello world");
	text.setPosition(525, 0);
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Red);

	circle.setRadius(50);
	circle.setPosition(550,300);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(2.f);
}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	pos = window->getSize();
	rect3.setPosition(pos.x-40, pos.y-40);
}

// Render level
void Level::render()
{
	
	beginDraw();
	window->draw(rect2);
	window->draw(rect1);
	window->draw(rect);
	window->draw(rect3);
	window->draw(text);
	//window->draw(circle);
	
	
	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}

