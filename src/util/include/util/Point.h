#ifndef BEJEWELED_UTIL_POINT_H_
#define BEJEWELED_UTIL_POINT_H_

namespace bejeweled {
namespace util {

struct Point {
  Point(int x, int y) : x_(x), y_(y) {}
  int x_;
  int y_;
};

} // namespace util
} // namespace bejeweled

#endif // BEJEWELED_UTIL_POINT_H_

