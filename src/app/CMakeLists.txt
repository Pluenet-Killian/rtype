add_library(app STATIC
    src/CalculatorService.cpp
)

target_include_directories(app
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(app
    PUBLIC
        core
        ports
)

target_compile_features(app INTERFACE cxx_std_20)
target_compile_options(app PRIVATE -Wall -Wextra -Wpedantic)