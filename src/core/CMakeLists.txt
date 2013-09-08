file(GLOB_RECURSE src "*cpp")

include_directories("../graphics/include")

add_executable(bejeweled ${src})
target_link_libraries(bejeweled graphics)
