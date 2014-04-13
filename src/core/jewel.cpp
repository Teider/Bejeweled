#include "jewel.h"

#include <SDL2/SDL_image.h>

#include "graphics/Renderer.h"
#include "util/Log.h"
#include "util/Point.h"

namespace bejeweled {

namespace {

int dx[7] = {3,0,1,2,0,1,2};
int dy[7] = {3,0,0,0,1,1,1};

}

Jewel::Jewel() : type_(JewelType::kNull), position_(util::Point(0,0)), texture_(nullptr) {}

Jewel::Jewel(graphics::Renderer &renderer, JewelType type, util::Point position) : type_(type), position_(position), texture_(nullptr) {
  LogSDL(texture_ = graphics::Texture(IMG_LoadTexture(renderer, "resources/sprites/sprites.bmp")));
  auto aux = static_cast<int>(type_);
  auto x = dx[aux];
  auto y = dy[aux];
  spritesheet_location_ = util::Point{x * 32, y * 32} + Size();
}

void Jewel::Render(graphics::Renderer &renderer) {
  if (type_ != JewelType::kNull) {
    renderer.RenderCopy(texture_, spritesheet_location_, Size() + position_);
  }
}

util::Rectangle Jewel::Size() {
  static auto size = util::Rectangle{32, 32};
  return size;
}

} // namespace bejeweled
