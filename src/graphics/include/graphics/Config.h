#ifndef BEJEWELED_GRAPHICS_CONFIG_H_
#define BEJEWELED_GRAPHICS_CONFIG_H_

#include <SDL2/SDL.h> 

#include <memory>

namespace bejeweled {
namespace graphics {

class Config {
public:
  Config() {
    SDL_Init(SDL_INIT_EVERYTHING);
  };

  virtual ~Config() {
    SDL_Quit();
  }
  
};

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_CONFIG_H_

