cmake_minimum_required(VERSION 3.22.1)

project(metal-cpp-practice LANGUAGES CXX)

find_library(GLFW
    NAME glfw.3
    PATHS ${CMAKE_CURRENT_SOURCE_DIR}/deps/libs/macos
    REQUIRED
)

add_subdirectory(src)

add_executable(${PROJECT_NAME} src/main.cpp ${METAL} ${GLFW_HANDLER})
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)
target_include_directories(${PROJECT_NAME} PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/metal-cpp deps/GLFW 
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    )
target_link_libraries(${PROJECT_NAME} PUBLIC
    ${GLFW}
    "-framework Foundation"
    "-framework QuartzCore"
    "-framework Metal"
)
set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "-Wl,-F/Library/Frameworks")