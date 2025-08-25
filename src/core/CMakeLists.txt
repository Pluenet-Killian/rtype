add_library(core STATIC
    src/Math.cpp
)

target_include_directories(core
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(core INTERFACE cxx_std_20)
target_compile_options(core PRIVATE -Wall -Wextra -Wpedantic)
