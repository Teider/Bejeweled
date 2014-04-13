#ifndef BEJEWELED_GRAPHICS_TEXTURE_H_
#define BEJEWELED_GRAPHICS_TEXTURE_H_

#include <memory>

#include <SDL2/SDL.h> 

namespace bejeweled {
namespace graphics {

class Texture {
public:
  typedef std::shared_ptr<SDL_Texture> SDL_TexturePtr;

  Texture();
  Texture(SDL_Texture* ptr);

  operator SDL_Texture*() {
    return ptr_.get();
  }

private:
  SDL_TexturePtr ptr_;
};

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_TEXTURE_H_
