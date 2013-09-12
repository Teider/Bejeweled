#ifndef BEJEWELED_GRAPHICS_SDLCONFIG_H_
#define BEJEWELED_GRAPHICS_SDLCONFIG_H_

#include <cstdint>
#include <memory>

#include <SDL2/SDL.h>

#include "graphics/Config.h"

namespace bejeweled {
namespace graphics {

class SDLConfig : public Config {
public: 
  static std::map<Flags, uint32_t> convert_;

  SDLConfig(std::set<Flags>);

protected:
  ~SDLConfig();

};

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_SDLCONFIG_H_

