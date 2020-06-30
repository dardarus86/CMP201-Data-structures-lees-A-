#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework\TileMap.h"
#include "Child.h"
#include <string>
#include <iostream>
#include <vector>

class Level{
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt);
	void update(float dt);
	void render();


private:
	// Default functions for rendering to the screen.
	void beginDraw();
	void endDraw();

	// Default variables for level class.
	sf::RenderWindow* window;
	Input* input;
	TileMap tileMap;
	Child child;
	sf::Texture childtexture;
};