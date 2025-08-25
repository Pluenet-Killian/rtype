add_library(adapters STATIC
    src/logger/ConsoleLogger.cpp
)

target_include_directories(adapters
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(adapters
    PUBLIC
        app
        ports
        core
)

target_compile_features(adapters INTERFACE cxx_std_20)
target_compile_options(adapters PRIVATE -Wall -Wextra -Wpedantic)