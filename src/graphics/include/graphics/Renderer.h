#ifndef BEJEWELED_GRAPHICS_RENDERER_H_
#define BEJEWELED_GRAPHICS_RENDERER_H_

#include <memory>

namespace bejeweled {
namespace graphics {

class Surface;
class Texture;

class Renderer {
public:
  virtual ~Renderer() {};
  virtual std::unique_ptr<Texture> CreateTextureFromSurface(Surface *surface) = 0;

protected:
  Renderer() {};

private:
  Renderer(const Renderer&) = delete;
  Renderer& operator=(const Renderer&) = delete;

};

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_RENDERER_H_

