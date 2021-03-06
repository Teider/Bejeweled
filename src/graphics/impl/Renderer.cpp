#include "graphics/Renderer.h"

#include "graphics/Sprite.h"
#include "graphics/Surface.h"
#include "graphics/Texture.h"
#include "util/Log.h"
#include "util/Rectangle.h"


namespace bejeweled {
namespace graphics {

Renderer::Renderer(SDL_Window *win, int index, uint32_t flags)
	: ptr_(SDL_CreateRenderer(win, index, flags), SDL_DestroyRenderer) {}

Texture Renderer::CreateTextureFromSurface(Surface &surface) {
  LogSDL(auto texture = SDL_CreateTextureFromSurface(*this, surface));
  return Texture(texture);
}

void Renderer::RenderClear() {
  LogSDL(SDL_RenderClear(*this));
}

void Renderer::RenderCopy(Texture &texture, util::Rectangle source, util::Rectangle destination) {
  LogSDL(SDL_RenderCopy(*this, texture, source, destination));
}

void Renderer::RenderPresent() {
  LogSDL(SDL_RenderPresent(*this));
}

void Renderer::RenderSprite(Sprite sprite, util::Rectangle destination) {
  RenderCopy(sprite.texture_, sprite.position_, destination);
}


} // namespace graphics
} // namespace bejeweled

