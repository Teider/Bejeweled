#include "jewel.h"

#include "graphics/Renderer.h"
#include "util/Point.h"

namespace bejeweled {

Jewel::Jewel() : type_(JewelType::kNull), position_(util::Point(0,0)), spritesheet_location_(0,0,0,0), texture_(nullptr) {}

Jewel::Jewel(JewelType type, graphics::Texture &texture, util::Rectangle spritesheet_location) : type_(type), spritesheet_location_(spritesheet_location), texture_(texture) {}

void Jewel::SetPosition(util::Point pos) {
  position_ = pos;
}

void Jewel::Render(graphics::Renderer &renderer) {
  if (type_ != JewelType::kNull) {
    renderer.RenderCopy(texture_, spritesheet_location_, Size() + position_);
  }
}

util::Rectangle Jewel::Size() {
  static auto size = util::Rectangle{32, 32};
  return size;
}

} // namespace bejeweled
