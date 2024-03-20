add_executable(main main.cpp)

set_property(TARGET main PROPERTY CXX_STANDARD 20)

add_library(tello_controls ${CMAKE_SOURCE_DIR}/include/tello_controls/tello.hpp)
set_target_properties(tello_controls PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(main PUBLIC tello_controls)

