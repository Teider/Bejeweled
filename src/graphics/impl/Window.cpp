#include "graphics/Window.h"
#include "graphics/Renderer.h"

namespace bejeweled {
namespace graphics {

Window::Window(const std::string &name, int x, int y, int w, int h, uint32_t flags)
	: ptr_(SDL_CreateWindow(name.c_str(), x, y, w, h, flags), SDL_DestroyWindow) {}
  

Renderer Window::CreateRenderer(int index, uint32_t flags) {
  return Renderer(ptr_.get(), index, flags);
}

} // namespace graphics
} // namespace bejeweled
