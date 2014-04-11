file(GLOB_RECURSE src "*cpp")

include_directories("../graphics/include")
include_directories("../util/include")

add_executable(bejeweled ${src})
target_link_libraries(bejeweled graphics ${SDL2_IMAGE_LIBRARIES})
