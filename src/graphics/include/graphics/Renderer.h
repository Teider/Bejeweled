#ifndef BEJEWELED_GRAPHICS_RENDERER_H_
#define BEJEWELED_GRAPHICS_RENDERER_H_

namespace bejeweled {
namespace graphics {

class Renderer {
public:
  virtual ~Renderer() {};

protected:
  Renderer() {};

private:
  Renderer(const Renderer&) = delete;
  Renderer& operator=(const Renderer&) = delete;

};

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_RENDERER_H_

