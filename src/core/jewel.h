#ifndef BEJEWELED_CORE_JEWEL_H_
#define BEJEWELED_CORE_JEWEL_H_

#include "graphics/Texture.h"
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
  Jewel(graphics::Renderer &renderer, JewelType type, util::Point position);
  void Render(graphics::Renderer &renderer);
  util::Rectangle Size();

 private:
  JewelType type_;
  util::Point position_;
  util::Rectangle spritesheet_location_;
  graphics::Texture texture_;
};

} //namespace bejeweled

#endif // BEJEWELED_CORE_JEWEL_H_
