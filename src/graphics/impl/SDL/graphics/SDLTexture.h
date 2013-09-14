#ifndef BEJEWELED_GRAPHICS_SDLTEXTURE_H_
#define BEJEWELED_GRAPHICS_SDLTEXTURE_H_

#include <cstdint>
#include <memory>

#include <SDL2/SDL.h>

#include "graphics/Texture.h"

namespace bejeweled {
namespace graphics {

class SDLTexture : public Texture {
public:
  typedef std::unique_ptr<SDL_Texture, decltype(SDL_DestroyTexture)*> SDL_TexturePtr;

  SDLTexture(SDL_Texture* ptr);
  SDL_Texture* GetHandle();

private:
  SDL_TexturePtr ptr_;

};

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_SDLTEXTURE_H_

