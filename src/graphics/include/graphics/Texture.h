#ifndef BEJEWELED_GRAPHICS_TEXTURE_H_
#define BEJEWELED_GRAPHICS_TEXTURE_H_

#include <memory>

#include <SDL2/SDL.h> 

namespace bejeweled {
namespace graphics {

class Texture {
public:
  typedef std::unique_ptr<SDL_Texture, decltype(SDL_DestroyTexture)*> SDL_TexturePtr;

  Texture(SDL_Texture* ptr);
  SDL_Texture* GetHandle();

private:
  SDL_TexturePtr ptr_;
};

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_TEXTURE_H_
