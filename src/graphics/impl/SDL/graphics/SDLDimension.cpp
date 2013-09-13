#include "graphics/SDLDimension.h"

namespace bejeweled {
namespace graphics {

SDLDimension::SDLDimension(int x, int y, int w, int h) {
  rect.x = x;
  rect.y = y;
  rect.w = w;
  rect.h = h;
}

} // namespace graphics
} // namespace bejeweled
