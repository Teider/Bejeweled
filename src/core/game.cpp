#include <iostream>
#include <string>
#include <memory>

#include "graphics/Config.h"
#include "graphics/Window.h"
#include "graphics/Renderer.h"
#include "graphics/Surface.h"
#include "graphics/Texture.h"

#include "game.h"

namespace bejeweled {

void Game::loop() {
	auto config(graphics::Config::Flags::kInitEverything);
	auto window = graphics::WindowFactory("bejeweled", 10, 10, 300, 300, 0);
  auto renderer = window->CreateRenderer(0, 0);
  //FIXME: the next line is causing a linker error
  //auto surface = graphics::SurfaceBMPFactory("~/repos/Bejeweled/test.bmp");
  //auto texture = renderer->CreateTextureFromSurface(surface.get());
	while(true) {
		std::cout << "Press something to continue: "; 
		std::cin.get();
		break;
	}
}

} // namespace bejeweled
