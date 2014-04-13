#ifndef BEJEWELED_CORE_JEWELFACTORY_H_
#define BEJEWELED_CORE_JEWELFACTORY_H_

#include <random>

#include "graphics/Texture.h"

namespace bejeweled {
class Jewel;

namespace graphics {
class Renderer;
}

class JewelFactory {
 public:
  JewelFactory(int jewel_pool_size, graphics::Renderer &renderer);
  Jewel GetNextJewel();
 private:
  std::mt19937 generator_;
  std::uniform_int_distribution<int> dist_;
  graphics::Texture jewel_texture_;
};

} //namespace bejeweled

#endif //BEJEWELED_CORE_JEWELFACTORY_H_
