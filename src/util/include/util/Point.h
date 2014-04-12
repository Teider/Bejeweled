#ifndef BEJEWELED_UTIL_POINT_H_
#define BEJEWELED_UTIL_POINT_H_

namespace bejeweled {
namespace util {

struct Point {
  Point(int x, int y) : x_(x), y_(y) {}

  Point& operator+=(const Point &rhs) {
    x_ += rhs.x_;
    y_ += rhs.y_;
    return *this;
  }

  int x_;
  int y_;
};

inline Point operator+(Point lhs, const Point &rhs) {
  lhs += rhs;
  return lhs;
}

} // namespace util
} // namespace bejeweled

#endif // BEJEWELED_UTIL_POINT_H_

