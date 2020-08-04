cmake_minimum_required(VERSION 2.8.3)

#find_package(Python3 ${PY_VERSION} REQUIRED)
find_package(PythonLibs 3 REQUIRED)
find_package(Boost 1.64.0 REQUIRED COMPONENTS python3)

add_library(human human.cpp)

add_library(example SHARED example.cpp)
set_target_properties(example PROPERTIES PREFIX "")
target_include_directories(example PUBLIC ${Boost_INCLUDE_DIRS} ${PYTHON_INCLUDE_DIRS})
target_link_libraries(example ${Boost_LIBRARIES} ${PYTHON_LIBRARIES} human)
