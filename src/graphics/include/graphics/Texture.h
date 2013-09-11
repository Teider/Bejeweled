#ifndef BEJEWELED_GRAPHICS_TEXTURE_H_
#define BEJEWELED_GRAPHICS_TEXTURE_H_

namespace bejeweled {
namespace graphics {

class Texture {
public:
  virtual ~Texture() {};

protected:
  Texture() {};

private:
  Texture(const Texture&) = delete;
  Texture& operator=(const Texture&) = delete;

};

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_TEXTURE_H_
