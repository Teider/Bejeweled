#include "graphics/SDLSurface.h"
#include "graphics/SDLTexture.h"

#include "graphics/SDLRenderer.h"

namespace bejeweled {
namespace graphics {

SDLRenderer::SDLRenderer(SDL_Window *win, int index, int32_t flags)
	: ptr_(SDL_CreateRenderer(win, index, flags), SDL_DestroyRenderer) {}

std::unique_ptr<Texture> SDLRenderer::CreateTextureFromSurface(Surface *surface) {
  auto surface_ptr = (dynamic_cast<SDLSurface*>(surface))->GetHandle();
  auto texture_ptr = SDL_CreateTextureFromSurface(ptr_.get(), surface_ptr);
  return std::unique_ptr<Texture>(new SDLTexture(texture_ptr));
}

void SDLRenderer::RenderClear() {
  SDL_RenderClear(ptr_.get());
}

} // namespace graphics
} // namespace bejeweled

