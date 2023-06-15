cmake_minimum_required(VERSION 3.26.4)

project(hash_c)

set(SRC_LIST src/main.c src/hash_table.c)

add_executable(${PROJECT_NAME} ${SRC_LIST})

target_include_directories(${PROJECT_NAME} PUBLIC
                            ${PROJECT_BINARY_DIR}
                            ${PROJECT_SOURCE_DIR}/src
                            )
