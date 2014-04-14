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

JewelFactory::JewelFactory(int jewel_pool_size, graphics::Renderer &renderer) : generator_(std::random_device()()), dist_(0, jewel_pool_size), jewel_texture_() {
  LogSDL(jewel_texture_ = graphics::Texture(IMG_LoadTexture(renderer, "resources/sprites/sprites.png")));
}

Jewel JewelFactory::GetNextJewel() {
  auto aux = dist_(generator_) + 1;
  auto x = dx[aux];
  auto y = dy[aux];
  auto spritesheet_location = util::Point{x * 32, y * 32} + Jewel::Size();
  return Jewel(static_cast<JewelType>(aux), jewel_texture_, spritesheet_location);
}


} // namespace bejewled
