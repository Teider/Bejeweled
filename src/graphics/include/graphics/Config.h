#ifndef BEJEWELED_GRAPHICS_CONFIG_H_
#define BEJEWELED_GRAPHICS_CONFIG_H_

#include <SDL2/SDL.h> 

#include <memory>

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

  Config() {};

  virtual ~Config() {
    SDL_Quit();
  }

private:
  Config(const Config&) = delete;
  Config& operator=(const Config&) = delete;
  
};

std::unique_ptr<Config> ConfigFactory(Config::Flags flags);

} // namespace graphics
} // namespace bejeweled

#endif // BEJEWELED_GRAPHICS_CONFIG_H_

