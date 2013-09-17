#include "graphics/Surface.h"

namespace bejeweled {
namespace graphics {

Surface::Surface(SDL_Surface *ptr)
	: ptr_(ptr, SDL_FreeSurface) {}
  
SDL_Surface* Surface::GetHandle() {
  return ptr_.get();
}

Surface SurfaceBMPFactory(std::string name) {
  //FIXME: there should be a check for errors here
  return Surface(SDL_LoadBMP(name.c_str()));
}

} // namespace graphics
} // namespace bejeweled

