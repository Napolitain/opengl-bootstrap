# Testing library
FetchContent_Declare(
        catch
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v3.2.0)
FetchContent_MakeAvailable(catch)

# Tests need to be added as executables first
add_executable(testlib  geometry/RectangleTest.cpp)

# I'm using C++17 in the test
target_compile_features(testlib PRIVATE cxx_std_17)

# Should be linked to the main library, as well as the Catch2 testing library
target_link_libraries(testlib PRIVATE geometry Catch2::Catch2)

# If you register a test, then ctest and make test will run it.
# You can also run examples and check the output, as well.
add_test(NAME testlib COMMAND testlib) # Command can be a target

