# Note that headers are optional, and do not affect add_library, but they will not
# show up in IDEs unless they are listed in add_library.

# Optionally glob, but only for CMake 3.12 or later:
file(GLOB HEADER_LIST CONFIGURE_DEPENDS "${PROJECT_SOURCE_DIR}/include/geometry/*.hpp")

# Make an automatic library - will be static or dynamic based on user setting
add_library(geometry geometry/Rectangle.cpp ../include/geometry/Rectangle.hpp ../include/geometry/Rectangle.hpp geometry/Line.cpp ../include/geometry/Line.hpp)

# We need this directory, and users of our library will need it too
target_include_directories(geometry PUBLIC ../include)

# All users of this library will need at least C++11
target_compile_features(geometry PUBLIC cxx_std_17)

# IDEs should put the headers in a nice place
source_group(
        TREE "${PROJECT_SOURCE_DIR}/include"
        PREFIX "Header Files"
        FILES ${HEADER_LIST})

