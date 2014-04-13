#include "grid.h"

#include "graphics/Renderer.h"
#include "jewel.h"
#include "cell.h"

namespace bejeweled {

Grid::Grid(int width, int height, graphics::Renderer &renderer) : width_(width), height_(height), grid_() {
  for (int i = 0; i < width_; ++i) {
    grid_.emplace_back();
    for (int j = 0; j < height_; ++j) {
      grid_[i].emplace_back();
    }
  }
  InitJewels(renderer);
}

void Grid::Render(graphics::Renderer &renderer) {
  for (auto& column : grid_) {
    for (auto& cell : column) {
      cell.Render(renderer);
    }
  }
}

void Grid::onClick(int x, int y) {
  x /= 32;
  y /= 32;

  if ((x < width_) && (y < height_)) {
    grid_[x][y].onClick();
  }
}

void Grid::InitJewels(graphics::Renderer &renderer) {
  for (int i = 0; i < width_; ++i) {
    for (int j = 0; j < height_; ++j) {
      grid_[i][j].SetJewel(Jewel{renderer, JewelType::kRed, util::Point(32 * i, 32 * j)});
    }
  }
}

} //namespace bejeweled
