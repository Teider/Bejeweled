#ifndef BEJEWELED_CORE_CELL_H_
#define BEJEWELED_CORE_CELL_H_

#include "jewel.h"

namespace bejeweled {

namespace graphics {
class Renderer;
}

class Cell {
 public:
  void Render(graphics::Renderer &renderer);
  void SetJewel(Jewel &&jewel);
  void onClick();
 
 private:
  Jewel jewel_;
};

} //namespace bejeweled

#endif //BEJEWELED_CORE_CELL_H_
