#ifndef BEJEWELED_GRAPHICS_CONFIG_H_
#define BEJEWELED_GRAPHICS_CONFIG_H_

#include <cstdint>

namespace bejeweled {
namespace graphics {

class Config {
public:
  Config();
  Config(uint32_t flags);
  ~Config();
 
};

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_CONFIG_H_

