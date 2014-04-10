#include "graphics/Surface.h"

#include "util/log.h"

namespace bejeweled {
namespace graphics {

Surface::Surface(SDL_Surface *ptr)
	: ptr_(ptr, SDL_FreeSurface) {}
  
Surface Surface::SurfaceBMPFactory(std::string name) {
  LogSDL(auto surface = SDL_LoadBMP(name.c_str()));
  return Surface{surface};
}

} // namespace graphics
} // namespace bejeweled

