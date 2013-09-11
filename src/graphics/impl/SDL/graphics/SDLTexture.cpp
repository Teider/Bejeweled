#include "graphics/SDLTexture.h"

namespace bejeweled {
namespace graphics {

SDLTexture::SDLTexture(SDL_Texture *ptr)
	: ptr_(ptr, SDL_DestroyTexture) {}
  
} // namespace graphics
} // namespace bejeweled

