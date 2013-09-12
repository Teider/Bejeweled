#include "graphics/SDLSurface.h"

namespace bejeweled {
namespace graphics {

SDLSurface::SDLSurface(SDL_Surface *ptr)
	: ptr_(ptr, SDL_FreeSurface) {}
  
std::unique_ptr<Surface> SurfaceFactory(std::string name) {
  //FIXME: there should be a check for errors here
  return std::unique_ptr<Surface>(new SDLSurface(SDL_LoadBMP(name.c_str())));
}

SDL_Surface* SDLSurface::GetHandle() {
  return ptr_.get();
}

} // namespace graphics
} // namespace bejeweled

