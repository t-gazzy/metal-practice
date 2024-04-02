cmake_minimum_required(VERSION 3.22.1)

project(metal-cpp-practice LANGUAGES CXX)

add_executable(${PROJECT_NAME} src/main.cpp)
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)
target_include_directories(${PROJECT_NAME} PUBLIC metal-cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC
    "-framework Foundation"
    "-framework QuartzCore"
    "-framework Metal"
)
set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "-Wl,-F/Library/Frameworks")