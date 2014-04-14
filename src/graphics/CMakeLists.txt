file(GLOB_RECURSE src RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "./*.cpp")

include_directories("../util/include")
include_directories("./include")

add_library(graphics STATIC ${src})
target_link_libraries(graphics util ${SDL2_LIBRARY})
