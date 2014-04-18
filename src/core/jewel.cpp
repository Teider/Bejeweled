#include "jewel.h"

#include "graphics/Renderer.h"
#include "util/Point.h"

namespace bejeweled {

Jewel::Jewel() : type_(JewelType::kNull), position_(util::Point(0,0)) {}

Jewel::Jewel(JewelType type, graphics::Sprite sprite) : type_(type), sprite_(sprite) {}

void Jewel::SetPosition(util::Point pos) {
  position_ = pos;
}

void Jewel::Render(graphics::Renderer &renderer) {
  if (type_ != JewelType::kNull) {
    renderer.RenderSprite(sprite_, Size() + position_);
  }
}

util::Rectangle Jewel::Size() {
  static auto size = util::Rectangle{32, 32};
  return size;
}

} // namespace bejeweled
