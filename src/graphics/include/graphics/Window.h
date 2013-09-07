#ifndef BEJEWELED_GRAPHICS_WINDOW_H_
#define BEJEWELED_GRAPHICS_WINDOW_H_

#include <string>
#include <cstdint>

namespace bejeweled {
namespace graphics {

class Window {
public:
  Window(std::string, int x, int y, int w, int h, uint32_t flags);

protected:
  ~Window();

};

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_WINDOW_H_
