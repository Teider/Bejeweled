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
  Jewel(JewelType type, graphics::Texture &texture, util::Rectangle spritesheet_location);
  void SetPosition(util::Point pos);
  void Render(graphics::Renderer &renderer);
  static util::Rectangle Size();

 private:
  JewelType type_;
  util::Point position_;
  //TODO(lucascp): We should group the texture and location into a class graphics::Sprite.
  // This could show useful when doing animations later, too.
  util::Rectangle spritesheet_location_;
  graphics::Texture texture_;
};

} //namespace bejeweled

#endif // BEJEWELED_CORE_JEWEL_H_
