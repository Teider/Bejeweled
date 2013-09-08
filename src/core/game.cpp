#include <iostream>
#include <string>
#include <memory>

#include "graphics/Window.h"
#include "graphics/Config.h"

#include "game.h"

namespace bejeweled {

void Game::loop() {
	graphics::Config config;
	std::unique_ptr<graphics::Window> window{graphics::WindowFactory("bejeweled", 10, 10, 300, 300, 0)};
	while(true) {
		std::cout << "Press something to continue: "; 
		std::cin.get();
		break;
	}
}

} // namespace bejeweled
