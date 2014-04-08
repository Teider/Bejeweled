#include "graphics/Renderer.h"

#include "graphics/Surface.h"
#include "graphics/Texture.h"
#include "util/log.h"


namespace bejeweled {
namespace graphics {

Renderer::Renderer(SDL_Window *win, int index, uint32_t flags)
	: ptr_(SDL_CreateRenderer(win, index, flags), SDL_DestroyRenderer) {}

Texture Renderer::CreateTextureFromSurface(Surface &surface) {
  LogSDL(auto texture = SDL_CreateTextureFromSurface(ptr_.get(), surface.GetHandle()));
  return Texture(texture);
}

void Renderer::RenderClear() {
  LogSDL(SDL_RenderClear(ptr_.get()));
}

void Renderer::RenderCopy(Texture &texture, SDL_Rect *source, SDL_Rect *destination) {
  LogSDL(SDL_RenderCopy(ptr_.get(), texture.GetHandle() ,source, destination));
}

void Renderer::RenderPresent() {
  LogSDL(SDL_RenderPresent(ptr_.get()));
}


} // namespace graphics
} // namespace bejeweled

