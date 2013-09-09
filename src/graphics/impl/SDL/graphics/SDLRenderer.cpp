#include "graphics/SDLRenderer.h"

namespace bejeweled {
namespace graphics {

SDLRenderer::SDLRenderer(SDL_Window *win, int index, int32_t flags)
	: ptr_(SDL_CreateRenderer(win, index, flags), SDL_DestroyRenderer) {}
  
} // namespace graphics
} // namespace bejeweled

