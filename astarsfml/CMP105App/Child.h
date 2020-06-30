
#include "Framework/GameObject.h"
#include "Framework/Input.h"

class Child : public GameObject
{
public:

	void update(float dt);

	// Set the window component
	void setWindow(sf::RenderWindow* win) { window = win; };
	Child();
	~Child();

	void handleInput(float dt);
	// Returns window size
	sf::Vector2u getWindowSize();


private:

	sf::RenderWindow* window;

};