#ifndef BEJEWELED_CORE_GRID_H_
#define BEJEWELED_CORE_GRID_H_

#include <vector>

#include "cell.h"

namespace bejeweled {

namespace graphics {
class Renderer;
}

class Grid {
 public:
  Grid(int width, int height, graphics::Renderer &renderer);
  void Render(graphics::Renderer &renderer);
  void InitJewels(graphics::Renderer &renderer);

 private:
  int width_;
  int height_;
  std::vector<std::vector<Cell> > grid_;
};

} //namespace bejeweled

#endif //BEJEWELED_CORE_GRID_H_
