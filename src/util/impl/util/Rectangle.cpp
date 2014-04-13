#include "util/Rectangle.h"

#include <iostream>

namespace bejeweled {
namespace util {

Rectangle::Rectangle() : empty_rect_(true) {
}

Rectangle::Rectangle(int w, int h) : empty_rect_(false) {
  rect_.x = 0;
  rect_.y = 0;
  rect_.w = w;
  rect_.h = h;
}

Rectangle::Rectangle(int x, int y, int w, int h) : empty_rect_(false)  {
  rect_.x = x;
  rect_.y = y;
  rect_.w = w;
  rect_.h = h;
}

Rectangle::operator const SDL_Rect*() const {
  if (empty_rect_) {
    return nullptr;
  } else {
    return &rect_;
  }
}

Rectangle::operator SDL_Rect*() {
  if (empty_rect_) {
    return nullptr;
  } else {
    return &rect_;
  }
}

Rectangle Rectangle::operator+=(const Point &rhs) {
  rect_.x += rhs.x_;
  rect_.y += rhs.y_;
  return *this;
}

std::ostream& operator<<(std::ostream& os, const Rectangle &rect) {
  os << "Rectangle={" << rect.rect_.x << ", " << rect.rect_.y << ", " << rect.rect_.w << ", " << rect.rect_.h << "}";
  return os;
}

} // namespace util
} // namespace bejeweled
