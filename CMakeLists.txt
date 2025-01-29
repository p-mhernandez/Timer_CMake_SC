cmake_minimum_required(VERSION 3.10)

project(Timer)

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

if(CPPTEST_COVERAGE)
  include(cmake/cpptest-coverage.cmake)
endif()

if(CPPTEST_PROJECT)
  include(cmake/cpptest-project.cmake)
endif()

add_executable(timer
 clock.c
 driver.c
 timer.c
 stdinout.c)


cpptest_add_executable(Timer_Test
  CPPTEST_COMPILER_ID gcc_9-64
  CPPTEST_PROJECT_NAME Timer
  TARGETS timer
)
