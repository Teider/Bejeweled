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

  virtual ~Config() {};

protected:
  Config() {};

private:
  Config(const Config&) = delete;
  Config& operator=(const Config&) = delete;
  
};

std::unique_ptr<Config> ConfigFactory(Config::Flags flags);

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_CONFIG_H_

