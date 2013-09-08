#include <stdexcept>
#include <SDL2/SDL.h>

#include "graphics/Config.h"

namespace bejeweled {
namespace graphics {

Config::Config(uint32_t flags) {
  if (SDL_Init(flags) != 0) {
    throw std::runtime_error(SDL_GetError());
  }
}

Config::~Config(){
  SDL_Quit();
}

} // namespace graphics
} // namespace bejeweled

