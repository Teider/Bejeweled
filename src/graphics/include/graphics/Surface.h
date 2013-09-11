#ifndef BEJEWELED_GRAPHICS_SURFACE_H_
#define BEJEWELED_GRAPHICS_SURFACE_H_

#include <string>
#include <memory>

namespace bejeweled {
namespace graphics {

class Surface {
public:
  virtual ~Surface() {};

protected:
  Surface() {};

private:
  Surface(const Surface&) = delete;
  Surface& operator=(const Surface&) = delete;

};

std::unique_ptr<Surface> SurfaceBMPFactory(std::string name);

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_SURFACE_H_


