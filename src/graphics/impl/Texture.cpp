#include "graphics/Texture.h"

namespace bejeweled {
namespace graphics {

Texture::Texture() {}

Texture::Texture(SDL_Texture *ptr)
	: ptr_(ptr, SDL_DestroyTexture) {}

} // namespace graphics
} // namespace bejeweled

