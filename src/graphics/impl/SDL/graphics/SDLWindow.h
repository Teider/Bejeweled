#ifndef BEJEWELED_GRAPHICS_SDLWINDOW_H_
#define BEJEWELED_GRAPHICS_SDLWINDOW_H_

#include <string>
#include <cstdint>
#include <memory>

#include "graphics/Window.h"

struct SDL_Window;

namespace bejeweled {
namespace graphics {

class SDLWindow : public Window {
public:
  SDLWindow(const std::string &name, int x, int y, int w, int h, uint32_t flags);

private:
  std::unique_ptr<SDL_Window> ptr_;

};

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_SDLWINDOW_H_
