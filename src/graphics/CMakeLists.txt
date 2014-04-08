file(GLOB_RECURSE src RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "./*.cpp")
#file(GLOB_RECURSE src "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

message(STATUS ${src})
message(STATUS DONE!!!!)

include_directories("../util/include")
include_directories("./include")
include_directories("./impl/SDL")

add_library(graphics STATIC ${src})
target_link_libraries(graphics "/usr/lib/libSDL2.so")
