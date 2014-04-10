#ifndef BEJEWELED_GRAPHICS_WINDOW_H_
#define BEJEWELED_GRAPHICS_WINDOW_H_

#include <string>
#include <cstdint>
#include <memory>

#include <SDL2/SDL.h> 

namespace bejeweled {
namespace graphics {

class Renderer;

class Window {
public:
  typedef std::unique_ptr<SDL_Window, decltype(SDL_DestroyWindow)*> SDL_WindowPtr;

  Window(const std::string &name, int x, int y, int w, int h, uint32_t flags);
  Renderer CreateRenderer(int index, uint32_t flags);

  operator SDL_Window*() {
    return ptr_.get();
  }

private:
  SDL_WindowPtr ptr_;
};

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_WINDOW_H_
