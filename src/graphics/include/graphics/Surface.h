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

  explicit Surface(SDL_Surface* ptr);

  Surface(const Surface&) = delete;
  Surface(Surface&&);
  Surface& operator=(Surface&&);

  operator SDL_Surface*() {
    return ptr_.get();
  }

  static Surface SurfaceBMPFactory(std::string name);

private:
  SDL_SurfacePtr ptr_;

};


} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_SURFACE_H_


