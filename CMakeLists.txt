cmake_minimum_required(VERSION 3.19)

PROJECT(projectname VERSION 0.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SRC_FILES
  src/*.cpp
  src/*.h
)

set(${PROJECT_NAME}_LINKS
  spdlog
)
set(${PROJECT_NAME}_INCLUDES
  vendor/spdlog/include
  vendor/args
)
set(${PROJECT_NAME}_DEFINES)

#spdlog
add_subdirectory(vendor/spdlog)

add_executable(${PROJECT_NAME} ${SRC_FILES})

target_link_libraries(${PROJECT_NAME} ${${PROJECT_NAME}_LINKS})
target_include_directories(${PROJECT_NAME} PUBLIC ${${PROJECT_NAME}_INCLUDES})
target_compile_definitions(${PROJECT_NAME} PUBLIC ${${PROJECT_NAME}_DEFINES})
