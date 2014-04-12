#ifndef BEJEWELED_UTIL_RECTANGLE_H_
#define BEJEWELED_UTIL_RECTANGLE_H_

#include <SDL2/SDL.h>

#include "util/Point.h"

namespace bejeweled {
namespace util {

class Rectangle {
 public:
  Rectangle() : empty_rect_(true) {
  }

  Rectangle(int w, int h) : empty_rect_(false) {
    rect_.x = 0;
    rect_.y = 0;
    rect_.w = w;
    rect_.h = h;
  }

  Rectangle(int x, int y, int w, int h) : empty_rect_(false)  {
    rect_.x = x;
    rect_.y = y;
    rect_.w = w;
    rect_.h = h;
  }

  operator const SDL_Rect*() const {
    if (empty_rect_) {
      return nullptr;
    } else {
      return &rect_;
    }
  }

  operator SDL_Rect*() {
    if (empty_rect_) {
      return nullptr;
    } else {
      return &rect_;
    }
  }

  Rectangle operator+=(const Point &rhs) {
    rect_.x += rhs.x_;
    rect_.y += rhs.y_;
    return *this;
  }

  //TODO(lucascp): Add acessors and mutators.

 private:
  SDL_Rect rect_;
  //TODO(lucacp): Use something like boost::optional instead of this flag.
  // Alternatively, we can return nullptr on SDL_Rect conversion when all
  // fields have 0 value.
  bool empty_rect_;

};

inline Rectangle operator+(Rectangle lhs, const Point &rhs) {
  lhs += rhs;
  return lhs;
}

inline Rectangle operator+(const Point &lhs, Rectangle rhs) {
  rhs += lhs;
  return rhs;
}

} // namespace util
} // namespace bejeweled

#endif // BEJEWELED_UTIL_RECTANGLE_H_
