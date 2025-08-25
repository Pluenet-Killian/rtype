add_library(ports INTERFACE)

target_include_directories(ports
    INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(ports INTERFACE cxx_std_20)