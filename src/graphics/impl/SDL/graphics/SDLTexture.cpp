#include "graphics/SDLTexture.h"

namespace bejeweled {
namespace graphics {

SDLTexture::SDLTexture(SDL_Texture *ptr)
	: ptr_(ptr, SDL_DestroyTexture) {}

SDL_Texture* SDLTexture::GetHandle() {
  return ptr_.get();
}
  
} // namespace graphics
} // namespace bejeweled

