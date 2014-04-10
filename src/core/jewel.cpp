#include "jewel.h"

#include "graphics/Renderer.h"

namespace bejeweled {

Jewel::Jewel(JewelType type) : type_(type), position_(20, 20), texture_(nullptr) {
  // load image for this jewel type on texture
}

void Jewel::Render(graphics::Renderer renderer) {
  util::Rectangle src_rect{20, 20};
  renderer.RenderCopy(texture_, src_rect, position_);
}

} // namespace bejeweled
