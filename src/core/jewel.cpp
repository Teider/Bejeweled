#include "jewel.h"

#include <SDL2/SDL_image.h>
#include "graphics/Renderer.h"
#include "util/Log.h"

namespace bejeweled {

Jewel::Jewel(graphics::Renderer &renderer, JewelType type) : type_(type), position_(0, 0), texture_(nullptr) {
  LogSDL(texture_ = graphics::Texture(IMG_LoadTexture(renderer, "resources/sprites/sprites.bmp")));
  int x, y;
  switch(type_) {
    case JewelType::kRed:
      x = 1;
      y = 1;
      break;
    case JewelType::kGreen:
      x = 1;
      y = 2;
      break;
    case JewelType::kBlue:
      x = 1;
      y = 3;
      break;
    case JewelType::kPink:
      x = 2;
      y = 1;
      break;
    case JewelType::kPurple:
      x = 2;
      y = 2;
      break;
    case JewelType::kBrown:
      x = 2;
      y = 3;
      break;
  }
  spritesheet_location_ = util::Rectangle{x * 32, y * 32};
}

void Jewel::Render(graphics::Renderer &renderer) {
  renderer.RenderCopy(texture_, spritesheet_location_, Size() + position_);
}

util::Rectangle Jewel::Size() {
  static auto size = util::Rectangle{32, 32};
  return size;
}

} // namespace bejeweled
