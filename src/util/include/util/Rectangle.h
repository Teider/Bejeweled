#ifndef BEJEWELED_UTIL_RECTANGLE_H_
#define BEJEWELED_UTIL_RECTANGLE_H_

#include <SDL2/SDL.h>

namespace bejeweled {
namespace util {

class Rectangle {
 public:
  Rectangle(int w, int h) {
    rect_.x = 0;
    rect_.y = 0;
    rect_.w = w;
    rect_.h = h;
  }

  Rectangle(int x, int y, int w, int h)  {
    rect_.x = x;
    rect_.y = y;
    rect_.w = w;
    rect_.h = h;
  }

  operator SDL_Rect*() {
    return &rect_;
  }

  //TODO(lucascp): Add acessors and mutators

 private:
  SDL_Rect rect_;

};

} // namespace util
} // namespace bejeweled

#endif // BEJEWELED_UTIL_RECTANGLE_H_
