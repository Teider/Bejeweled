#ifndef BEJEWELED_CORE_JEWEL_H_
#define BEJEWELED_CORE_JEWEL_H_

#include "graphics/Sprite.h"
#include "util/Point.h"
#include "util/Rectangle.h"

namespace bejeweled {

namespace graphics {
class Renderer;
}

enum class JewelType {
  kNull,
  kRed,
  kGreen,
  kBlue,
  kPink,
  kPurple,
  kBrown,
};

class Jewel {
 public:
  Jewel();
  Jewel(JewelType type, graphics::Sprite sprite);
  void SetPosition(util::Point pos);
  void Render(graphics::Renderer &renderer);
  static util::Rectangle Size();

 private:
  JewelType type_;
  util::Point position_;
  graphics::Sprite sprite_;
};

} //namespace bejeweled

#endif // BEJEWELED_CORE_JEWEL_H_
