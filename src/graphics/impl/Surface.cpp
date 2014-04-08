#include "graphics/Surface.h"

#include "util/log.h"

namespace bejeweled {
namespace graphics {

Surface::Surface(SDL_Surface *ptr)
	: ptr_(ptr, SDL_FreeSurface) {}
  
SDL_Surface* Surface::GetHandle() {
  return ptr_.get();
}
  
void Surface::BlitSurface(const SDL_Rect* srcrect, Surface& dst, SDL_Rect* dstrect) {
  LogSDL(SDL_BlitSurface(ptr_.get(), srcrect, dst.ptr_.get(), dstrect));
}

Surface Surface::SurfaceBMPFactory(std::string name) {
  LogSDL(auto surface = SDL_LoadBMP(name.c_str()));
  return Surface{surface};
}

} // namespace graphics
} // namespace bejeweled

