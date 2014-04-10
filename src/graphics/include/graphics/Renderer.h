#ifndef BEJEWELED_GRAPHICS_RENDERER_H_
#define BEJEWELED_GRAPHICS_RENDERER_H_

#include <memory>

#include <SDL2/SDL.h> 

namespace bejeweled {

namespace util {
class Rectangle;
}

namespace graphics {

class Surface;
class Texture;

class Renderer {
public:
  typedef std::unique_ptr<SDL_Renderer, decltype(SDL_DestroyRenderer)*> SDL_RendererPtr;

  Renderer(SDL_Window *win, int index, uint32_t flags);

  Texture CreateTextureFromSurface(Surface &surface);
  void RenderClear();
  void RenderCopy(Texture &texture, util::Rectangle source, util::Rectangle detination);
  void RenderPresent();

  operator SDL_Renderer*() {
    return ptr_.get();
  }

private:
  SDL_RendererPtr ptr_;

};

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_RENDERER_H_

