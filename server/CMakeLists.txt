add_executable(r-type_server main/main.cpp)
target_link_libraries(r-type_server
    PRIVATE
        adapters
)

target_compile_options(r-type_server PRIVATE -Wall -Wextra -Wpedantic)
