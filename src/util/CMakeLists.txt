file(GLOB_RECURSE src RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "./*.cpp")

include_directories("./include")

add_library(util STATIC ${src})
target_link_libraries(util ${SDL2_LIBRARIES})
