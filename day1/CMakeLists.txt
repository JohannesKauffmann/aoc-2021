add_executable(day1 day1.cpp)

file(COPY        "${CMAKE_CURRENT_SOURCE_DIR}/input"
     DESTINATION "${CMAKE_CURRENT_BINARY_DIR}")
