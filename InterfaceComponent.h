#pragma once
#include "Properties.h"

class InterfaceComponent {
protected:
	//Resources
	sf::Sprite sprite;

	//Variables
	sf::Vector2f pos;

public:
	//Constructor / Destructor
	InterfaceComponent(const sf::Texture* texture, const sf::Vector2f& pos);
	virtual ~InterfaceComponent();

	//Getters
	const sf::Sprite getSprite() const;

	//Setters


	//Functions
	void update(const sf::Vector2f& mousePos);
	void render(sf::RenderTarget* target);
};
