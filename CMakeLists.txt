#0) Create code and CMake file
#1) mkdir build
#2) cd build
#3) cmake .. # configure cmake
#4) cmake --build .
#5) ./Executable

cmake_minimum_required(VERSION 3.3.2)

project(CppProjectTemplate VERSION 1.0.6 LANGUAGES C CXX)

# Create variables

#set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_CXX_EXTENSIONS OFF)

set(LIBRARY_NAME Library)
set(EXECUTABLE_NAME Executable)

option(COMPILE_EXECUTABLE "Whether to compile the executable" OFF)

#Subdirectory Lib
add_subdirectory(configured)
add_subdirectory(src)
add_subdirectory(app)



#if you want to take out compile file from build
#to chang the OFF from the terminal => cmake ..DCOMPILE_EXECUTABLE=ON
#if(COMPILE_EXECUTABLE)
    #add_subdirectory(app)
#else()
 #   message("W/o exe. compiling")
#endif()






