#ifndef BEJEWELED_GRAPHICS_SDLRENDERER_H_
#define BEJEWELED_GRAPHICS_SDLRENDERER_H_

#include <cstdint>
#include <memory>

#include <SDL2/SDL.h>

#include "graphics/Renderer.h"

namespace bejeweled {
namespace graphics {

class SDLRenderer : public Renderer {
public:
  typedef std::unique_ptr<SDL_Renderer, decltype(SDL_DestroyRenderer)*> SDL_RendererPtr;

  SDLRenderer(SDL_Window *win, int index, int32_t flags);

private:
  SDL_RendererPtr ptr_;

};

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_SDLRENDERER_H_

