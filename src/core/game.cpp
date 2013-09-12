#include <iostream>
#include <string>
#include <memory>

#include "graphics/Config.h"
#include "graphics/Window.h"
#include "graphics/Renderer.h"

#include "game.h"

namespace bejeweled {

void Game::loop() {
	auto config(graphics::Config::Flags::kInitEverything);
	auto window = graphics::WindowFactory("bejeweled", 10, 10, 300, 300, 0);
  auto renderer = window->CreateRenderer(0, 0);
	while(true) {
		std::cout << "Press something to continue: "; 
		std::cin.get();
		break;
	}
}

} // namespace bejeweled
