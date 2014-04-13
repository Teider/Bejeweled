#include "grid.h"

#include "graphics/Renderer.h"
#include "jewel.h"

namespace bejeweled {

void Cell::Render(graphics::Renderer &renderer) {
  jewel_.Render(renderer);
}

void Cell::SetJewel(Jewel &&jewel) {
  jewel_ = std::move(jewel);
}

void Cell::onClick() {
  SetJewel(Jewel());
}

} //namespace bejeweled
