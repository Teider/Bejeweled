#include "game.h"

#include <iostream>
#include <string>
#include <memory>

#include <SDL2/SDL.h>

#include "jewel.h"
#include "graphics/Config.h"
#include "graphics/Window.h"
#include "graphics/Renderer.h"
#include "graphics/Surface.h"
#include "graphics/Texture.h"
#include "util/Rectangle.h"
#include "util/Point.h"

namespace bejeweled {

void Game::loop() {
	auto config = graphics::Config{};
	auto window = graphics::Window{"bejeweled", 10, 10, 300, 300, 0};
  auto renderer = window.CreateRenderer(-1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
  auto jewel = Jewel{renderer, JewelType::kRed, util::Point(0,0)};
	while(true) {
    renderer.RenderClear();
    jewel.Render(renderer);
    renderer.RenderPresent();
		std::cout << "Press something to continue: "; 
		std::cin.get();
		break;
	}
}

} // namespace bejeweled
