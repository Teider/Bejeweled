#ifndef BEJEWELED_GRAPHICS_SDLDIMENSION_H_
#define BEJEWELED_GRAPHICS_SDLDIMENSION_H_

#include <SDL2/SDL.h>

#include "graphics/Dimension.h"

namespace bejeweled {
namespace graphics {

class SDLDimension : public Dimension {
public:
  SDLDimension(int x = 0, int y = 0, int w = 0, int h = 0);

  SDL_Rect* GetHandle();

private:
  SDL_Rect rect;

};

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_SDLDIMENSION_H_

