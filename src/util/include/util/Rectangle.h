#ifndef BEJEWELED_UTIL_RECTANGLE_H_
#define BEJEWELED_UTIL_RECTANGLE_H_

#include <iosfwd>

#include <SDL2/SDL.h>

#include "util/Point.h"

namespace bejeweled {
namespace util {

class Rectangle {
 public:
  Rectangle();
  Rectangle(int w, int h);
  Rectangle(int x, int y, int w, int h);

  operator const SDL_Rect*() const;

  operator SDL_Rect*(); 

  Rectangle operator+=(const Point &rhs); 

  //TODO(lucascp): Add acessors and mutators.

 private:
  SDL_Rect rect_;
  //TODO(lucacp): Use something like boost::optional instead of this flag.
  // Alternatively, we can return nullptr on SDL_Rect conversion when all
  // fields have 0 value.
  bool empty_rect_;

  friend std::ostream& operator<<(std::ostream& os, const Rectangle &rect);
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
