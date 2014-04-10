#ifndef BEJEWELED_CORE_JEWEL_H_
#define BEJEWELED_CORE_JEWEL_H_

#include "graphics/Texture.h"
#include "util/Rectangle.h"

namespace bejeweled {

namespace graphics {
class Renderer;
}

enum class JewelType {
  kRed,
  kOrange,
  kBlue,
  kYellow,
};

class Jewel {
 public:
  Jewel(JewelType type);
  void Render(graphics::Renderer renderer);

 private:
  JewelType type_;
  util::Rectangle position_;
  graphics::Texture texture_;
};

} //namespace bejeweled {

#endif // BEJEWELED_CORE_JEWEL_H_
