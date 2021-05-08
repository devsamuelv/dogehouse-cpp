cmake_minimum_required (VERSION 3.16)
project (dogehouse-cpp)
add_executable (dogehouse-cpp dogehouse.cpp)

# Adds the Sources subfolder of the Yoctopuce C++ library.
add_subdirectory (/home/samuelv/Desktop/code/c++/dogehouse-cpp/Sources/cpp-httplib-master httplib)

# Links the executable to the Yoctopuce C++ library (YoctoLib).
target_link_libraries (dogehouse-cpp LINK_PUBLIC httplib)