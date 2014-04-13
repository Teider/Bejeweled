#include "game.h"

#include <iostream>
#include <string>
#include <memory>

#include <SDL2/SDL.h>

#include "grid.h"
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
  Grid grid(5,5, renderer);
  SDL_Event lastEvent;
  bool quit = false;
  while(!quit) {
    while(SDL_PollEvent(&lastEvent)) {
      if (lastEvent.type == SDL_MOUSEBUTTONDOWN) {
        auto x = lastEvent.button.x;
        auto y = lastEvent.button.y;
        grid.onClick(x, y);
      }
      if (lastEvent.type == SDL_KEYDOWN) {
        quit = true;
      }
    }
    renderer.RenderClear();
    grid.Render(renderer);
    renderer.RenderPresent();
    SDL_Delay(16);
	}
}

void Game::onClick(int x, int y) {
  //grid.onClick(int x, int y);
}

} // namespace bejeweled
