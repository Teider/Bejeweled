#ifndef BEJEWELED_GRAPHICS_SPRITE_H_
#define BEJEWELED_GRAPHICS_SPRITE_H_

#include "graphics/Texture.h"
#include "graphics/Renderer.h"
#include "util/Rectangle.h"

namespace bejeweled {
namespace graphics {

class Sprite {
public:
  Sprite() = default;
  Sprite(graphics::Texture texture, util::Rectangle position);

private:
  graphics::Texture texture_;
  util::Rectangle position_;

  friend void graphics::Renderer::RenderSprite(Sprite sprite, util::Rectangle destination);
};

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_SPRITE_H_
