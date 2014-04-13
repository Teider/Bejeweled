#include "grid.h"

#include "graphics/Renderer.h"
#include "jewel.h"

namespace bejeweled {

Cell::Cell(int x, int y) : x_(x), y_(y) {}

void Cell::Render(graphics::Renderer &renderer) {
  jewel_.Render(renderer);
}

void Cell::SetJewel(Jewel &&jewel) {
  jewel_ = std::move(jewel);
  jewel_.SetPosition(util::Point{x_ * 32, y_ * 32});
}

} //namespace bejeweled
