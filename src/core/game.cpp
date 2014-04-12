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
  auto jewel1 = Jewel{renderer, JewelType::kRed, util::Point(0,0)};
  auto jewel2 = Jewel{renderer, JewelType::kGreen, util::Point(0,32)};
  auto jewel3 = Jewel{renderer, JewelType::kBlue, util::Point(0,64)};
  auto jewel4 = Jewel{renderer, JewelType::kPink, util::Point(0,96)};
  auto jewel5 = Jewel{renderer, JewelType::kPurple, util::Point(0,128)};
  auto jewel6 = Jewel{renderer, JewelType::kBrown, util::Point(0,160)};
	while(true) {
    renderer.RenderClear();
    jewel1.Render(renderer);
    jewel2.Render(renderer);
    jewel3.Render(renderer);
    jewel4.Render(renderer);
    jewel5.Render(renderer);
    jewel6.Render(renderer);
    renderer.RenderPresent();
		std::cout << "Press something to continue: "; 
		std::cin.get();
		break;
	}
}

} // namespace bejeweled
