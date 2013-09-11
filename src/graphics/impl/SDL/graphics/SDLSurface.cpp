#include "graphics/SDLSurface.h"

namespace bejeweled {
namespace graphics {

SDLSurface::SDLSurface(SDL_Surface *ptr)
	: ptr_(ptr, SDL_FreeSurface) {}
  
std::unique_ptr<Surface> SurfaceFactory(std::string name) {
  return std::unique_ptr<Surface>(new SDLSurface(SDL_LoadBMP(name.c_str())));
}


} // namespace graphics
} // namespace bejeweled

