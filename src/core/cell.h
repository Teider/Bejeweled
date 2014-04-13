#ifndef BEJEWELED_CORE_CELL_H_
#define BEJEWELED_CORE_CELL_H_

#include "jewel.h"

namespace bejeweled {

namespace graphics {
class Renderer;
}

class Cell {
 public:
  Cell(int x, int y);
  void Render(graphics::Renderer &renderer);
  void SetJewel(Jewel &&jewel);
 
 private:
  //TODO(lucascp): Position should be a Point
  int x_;
  int y_;
  Jewel jewel_;
};

} //namespace bejeweled

#endif //BEJEWELED_CORE_CELL_H_
