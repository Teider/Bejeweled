#ifndef BEJEWELED_GRAPHICS_SURFACE_H_
#define BEJEWELED_GRAPHICS_SURFACE_H_

#include <string>
#include <memory>

#include <SDL2/SDL.h> 

namespace bejeweled {
namespace graphics {

class Surface {
public:
  typedef std::unique_ptr<SDL_Surface, decltype(SDL_FreeSurface)*> SDL_SurfacePtr;

  Surface(SDL_Surface* ptr);

  SDL_Surface* GetHandle();

private:
  SDL_SurfacePtr ptr_;

};

Surface SurfaceBMPFactory(std::string name);

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_SURFACE_H_


