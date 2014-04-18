#include "JewelFactory.h"

#include <SDL2/SDL_image.h>

#include "jewel.h"
#include "graphics/Renderer.h"
#include "util/Log.h"

namespace bejeweled {

namespace {
int dx[7] = {3,0,1,2,0,1,2};
int dy[7] = {3,0,0,0,1,1,1};
}

JewelFactory::JewelFactory(int jewel_pool_size, graphics::Renderer &renderer) : generator_(std::random_device()()), dist_(0, jewel_pool_size - 1) {
  graphics::Texture jewel_texture;
  LogSDL(jewel_texture = graphics::Texture(IMG_LoadTexture(renderer, "resources/sprites/sprites.png")));
  for (auto i = 1; i <= jewel_pool_size; i++) {
    jewel_sprites_[static_cast<JewelType>(i)] = graphics::Sprite{jewel_texture, util::Point{dx[i] * 32, dy[i] * 32} + Jewel::Size()};
  }
}

Jewel JewelFactory::GetNextJewel() {
  auto jewel_type = static_cast<JewelType>(dist_(generator_) + 1);
  return Jewel{jewel_type, jewel_sprites_[jewel_type]};
}


} // namespace bejewled
