#ifndef BEJEWELED_UTIL_LOG_H_
#define BEJEWELED_UTIL_LOG_H_

#include <iostream>
#include <stdexcept>
#include <string>

#include <SDL2/SDL.h>

#define LogSDL(expr...) \
    SDL_ClearError(); \
    expr;\
    std::string error {SDL_GetError()}; \
    if (error.size() > 0) { \
      std::cerr << __FILENAME__ << ':' << __LINE__ << "  " << __FUNCTION__ << "\n\t" << error << '\n'; \
      throw std::runtime_error(error); \
    }


#endif // BEJEWELED_UTIL_LOG_H_
