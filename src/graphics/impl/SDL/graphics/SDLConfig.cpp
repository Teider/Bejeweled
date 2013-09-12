#include <stdexcept>

#include <SDL2/SDL.h>

#include "graphics/SDLConfig.h"

namespace bejeweled {
namespace graphics {

SDLConfig::SDLConfig(std::set<Flags> flags) {
  uint32_t sdl_flags = 0;
  for(auto &f : flags)
    sdl_flags |= SDLConfig::convert_.at(f);
  if (SDL_Init(sdl_flags) != 0) {
    throw std::runtime_error(SDL_GetError());
  }
}

SDLConfig::~SDLConfig(){
  SDL_Quit();
}

std::map<Config::Flags, uint32_t> SDLConfig::convert_ = {
  { Config::Flags::kInitAudio, SDL_INIT_AUDIO },
  { Config::Flags::kInitVideo, SDL_INIT_VIDEO },
  { Config::Flags::kInitEvents, SDL_INIT_EVENTS },
  { Config::Flags::kInitEverything, SDL_INIT_EVERYTHING }};

std::unique_ptr<Config> ConfigFactory(std::set<Config::Flags> flags) {
  return std::unique_ptr<Config>(new SDLConfig(flags));
}

} // namespace graphics
} // namespace bejeweled

