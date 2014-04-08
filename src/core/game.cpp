#include <iostream>
#include <string>
#include <memory>

#include <SDL2/SDL.h>

#include "graphics/Config.h"
#include "graphics/Window.h"
#include "graphics/Renderer.h"
#include "graphics/Surface.h"
#include "graphics/Texture.h"

#include "game.h"

namespace bejeweled {

void Game::loop() {
	auto config(graphics::Config::Flags::kInitEverything);
	auto window = graphics::Window("bejeweled", 10, 10, 300, 300, 0);
  auto renderer = window.CreateRenderer(0, 0);
  auto surface = graphics::Surface::SurfaceBMPFactory("resources/sprites/sprites.bmp");
  auto texture = renderer.CreateTextureFromSurface(surface);
  renderer.RenderClear();
  renderer.RenderCopy(texture, nullptr, nullptr);
  renderer.RenderPresent();
	while(true) {
		std::cout << "Press something to continue: "; 
		std::cin.get();
		break;
	}
}

} // namespace bejeweled
