#ifndef BEJEWELED_GRAPHICS_SDLWINDOW_H_
#define BEJEWELED_GRAPHICS_SDLWINDOW_H_

#include <string>
#include <cstdint>
#include <memory>

#include <SDL2/SDL.h>

#include "graphics/Window.h"

namespace bejeweled {
namespace graphics {

class SDLWindow : public Window {
public:
  typedef std::unique_ptr<SDL_Window, decltype(SDL_DestroyWindow)*> SDL_WindowPtr;
  SDLWindow(const std::string &name, int x, int y, int w, int h, uint32_t flags);

private:
  SDL_WindowPtr ptr_;

};

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_SDLWINDOW_H_
