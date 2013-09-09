#ifndef BEJEWELED_GRAPHICS_WINDOW_H_
#define BEJEWELED_GRAPHICS_WINDOW_H_

#include <string>
#include <cstdint>
#include <memory>

namespace bejeweled {
namespace graphics {

class Renderer;

class Window {
public:
  virtual ~Window() {};
  virtual std::unique_ptr<Renderer> CreateRenderer(int index, uint32_t flags) = 0;

protected:
  Window() {};

private:
  Window(const Window&) = delete;
  Window& operator=(const Window&) = delete;

};

std::unique_ptr<Window> WindowFactory(std::string name, int x, int y, int w, int h, uint32_t flags);

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_WINDOW_H_
