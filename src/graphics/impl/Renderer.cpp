#include "graphics/Surface.h"
#include "graphics/Texture.h"

#include "graphics/Renderer.h"

namespace bejeweled {
namespace graphics {

Renderer::Renderer(SDL_Window *win, int index, int32_t flags)
	: ptr_(SDL_CreateRenderer(win, index, flags), SDL_DestroyRenderer) {}

Texture Renderer::CreateTextureFromSurface(Surface &surface) {
  //TODO: check for errors
  return Texture(SDL_CreateTextureFromSurface(ptr_.get(), surface.GetHandle()));
}

void Renderer::RenderClear() {
  //TODO: check for errors
  SDL_RenderClear(ptr_.get());
}

void Renderer::RenderCopy(Texture &texture, SDL_Rect *source, SDL_Rect *destination) {
  //TODO: check for errors
  SDL_RenderCopy(ptr_.get(), texture.GetHandle() ,source, destination);
}

void Renderer::RenderPresent() {
  //TODO: check for errors
  SDL_RenderPresent(ptr_.get());
}


} // namespace graphics
} // namespace bejeweled

