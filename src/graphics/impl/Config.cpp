#include "graphics/Config.h"

#include <iostream>

namespace bejeweled {
namespace graphics {

std::unique_ptr<Config> ConfigFactory(Config::Flags flags) {
  SDL_Init(SDL_INIT_EVERYTHING);
  return std::unique_ptr<Config>(new Config{});
}

} // namespace graphics
} // namespace bejeweled
