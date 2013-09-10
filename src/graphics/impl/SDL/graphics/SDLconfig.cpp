#include <stdexcept>
#include <SDL2/SDL.h>

#include "graphics/Config.h"

namespace bejeweled {
namespace graphics {

Config::Config(std::set<Config::Flags> flags) {
  uint32_t sdl_flags = 0;
  for(auto &f : flags)
    sdl_flags |= Config::convert_.at(f);
  if (SDL_Init(sdl_flags) != 0) {
    throw std::runtime_error(SDL_GetError());
  }
}

Config::Config() {
  Config(std::set<Flags>{Flags::kInitEverything});
}

Config::~Config(){
  SDL_Quit();
}

const std::map<Config::Flags, uint32_t> Config::convert_ = {
  { Config::Flags::kInitAudio, SDL_INIT_AUDIO},
  { Config::Flags::kInitVideo, SDL_INIT_VIDEO},
  { Config::Flags::kInitEvents, SDL_INIT_EVENTS},
  { Config::Flags::kInitEverything, SDL_INIT_EVERYTHING}};

} // namespace graphics
} // namespace bejeweled

