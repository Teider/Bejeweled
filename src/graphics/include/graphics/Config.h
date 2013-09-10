#ifndef BEJEWELED_GRAPHICS_CONFIG_H_
#define BEJEWELED_GRAPHICS_CONFIG_H_

#include <set>
#include <map>

namespace bejeweled {
namespace graphics {

class Config {
public:
  enum class Flags {
	kInitAudio,
	kInitVideo,
	kInitJoystick,
	kInitEvents,
	kInitEverything
  };

  Config();
  Config(std::set<Flags> flags);
  ~Config();
private:
  //FIXME: remove this from here. Config should be an interface with pure virtual methods,
  //      the impl should be a subclass, and this map should only be there.
  static const std::map<Flags, uint32_t> convert_;

};

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_CONFIG_H_

