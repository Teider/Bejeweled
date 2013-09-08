file(GLOB_RECURSE src "./*.cpp")

include_directories(${SDL_INCLUDE_DIR})
include_directories("./include")
message("${CMAKE_CURRENT_SOURCE_DIR}/impl") 
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/impl/SDL")

add_library(graphics STATIC ${src})
target_link_libraries(graphics SDL_LIBRARY)
