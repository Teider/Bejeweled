file(GLOB_RECURSE src RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "./*.cpp")

message(STATUS ${src})
message(STATUS DONE!!!!)

include_directories("./include")

add_library(util STATIC ${src})
target_link_libraries(util "/usr/lib/libSDL2.so")
