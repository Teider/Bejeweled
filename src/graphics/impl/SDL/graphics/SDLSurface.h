#ifndef BEJEWELED_GRAPHICS_SDLSURFACE_H_
#define BEJEWELED_GRAPHICS_SDLSURFACE_H_

#include <string>
#include <memory>

#include <SDL2/SDL.h>

#include "graphics/Surface.h"

namespace bejeweled {
namespace graphics {

class SDLSurface : public Surface {
public:
  typedef std::unique_ptr<SDL_Surface, decltype(SDL_FreeSurface)*> SDL_SurfacePtr;

  SDLSurface(SDL_Surface* ptr);

private:
  SDL_SurfacePtr ptr_;

};

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_SDLSURFACE_H_

