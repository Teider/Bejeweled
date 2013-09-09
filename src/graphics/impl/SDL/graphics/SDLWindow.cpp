#include "graphics/SDLWindow.h"
#include "graphics/SDLRenderer.h"

namespace bejeweled {
namespace graphics {

SDLWindow::SDLWindow(const std::string &name, int x, int y, int w, int h, uint32_t flags)
	: ptr_(SDL_CreateWindow(name.c_str(), x, y, w, h, flags), SDL_DestroyWindow) {}
  

std::unique_ptr<Renderer> SDLWindow::CreateRenderer(int index, uint32_t flags) {
  return std::unique_ptr<Renderer>(new SDLRenderer(ptr_.get(), index, flags));
}

std::unique_ptr<Window> WindowFactory(std::string name, int x, int y, int w, int h, uint32_t flags) {
  return std::unique_ptr<Window>(new SDLWindow(name, x, y, w, h, flags));
}


} // namespace graphics
} // namespace bejeweled
