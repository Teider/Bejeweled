#include "jewel.h"

#include <SDL2/SDL_image.h>
#include "graphics/Renderer.h"
#include "util/Log.h"

namespace bejeweled {

Jewel::Jewel(graphics::Renderer &renderer, JewelType type) : type_(type), position_(20, 20), texture_(nullptr) {
  LogSDL(texture_ = graphics::Texture(IMG_LoadTexture(renderer, "resources/sprites/sprites.bmp")));
}

void Jewel::Render(graphics::Renderer &renderer) {
  util::Rectangle src_rect{20, 20};
  renderer.RenderCopy(texture_, src_rect, position_);
}

} // namespace bejeweled
