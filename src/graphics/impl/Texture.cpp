#include "graphics/Texture.h"

namespace bejeweled {
namespace graphics {

Texture::Texture(SDL_Texture *ptr)
	: ptr_(ptr, SDL_DestroyTexture) {}

SDL_Texture* Texture::GetHandle() {
  return ptr_.get();
}
  
} // namespace graphics
} // namespace bejeweled

