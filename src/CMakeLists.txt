file(GLOB_RECURSE src "./*cpp")

include_directories(".")
add_executable(bejeweled ${src})
