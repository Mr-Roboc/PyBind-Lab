cmake_minimum_required(VERSION 3.10)
project(PybindExample)

set(CMAKE_CXX_STANDARD 11)

# 1. Find Python Interpreter (So we can ask it where libraries are)
find_package(PythonInterp REQUIRED)

# 2. Sleuth Work: Ask Python where 'pybind11' is installed
# (This runs a mini python script to get the path)
execute_process(
    COMMAND "${PYTHON_EXECUTABLE}" -c "import pybind11; print(pybind11.get_cmake_dir())"
    OUTPUT_VARIABLE PYBIND11_PATH
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

# 3. Add that path to CMake's search list
list(APPEND CMAKE_PREFIX_PATH "${PYBIND11_PATH}")

# 4. Find pybind11 officially
find_package(pybind11 REQUIRED)

# 5. Create the Python Module
# This creates 'super_math.so', NOT an executable 'app'
pybind11_add_module(super_math fast_math.cpp)
