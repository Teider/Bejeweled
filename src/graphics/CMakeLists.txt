file(GLOB_RECURSE src "./*.cpp")

include_directories("./include")
include_directories("./impl/SDL")

add_library(graphics STATIC ${src})
target_link_libraries(graphics "/usr/lib/libSDL2.so")
