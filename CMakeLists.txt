cmake_minimum_required(VERSION 3.14)
project(Lab3UnitTests)

# Подключаем модуль для скачивания библиотек
include(FetchContent)

# Скачиваем Catch2
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.5.2
)

# Скачиваем GoogleTest
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.14.0
)

# Делаем их доступными
FetchContent_MakeAvailable(Catch2 googletest)

# Библиотека с математикой
add_library(math_funcs src/math_funcs.cpp)
target_include_directories(math_funcs PUBLIC src)

# Тесты для Catch2
add_executable(test_catch2 tests/test_catch2.cpp)
target_link_libraries(test_catch2 PRIVATE math_funcs Catch2::Catch2WithMain)

# Тесты для GoogleTest
add_executable(test_gtest tests/test_gtest.cpp)
target_link_libraries(test_gtest PRIVATE math_funcs GTest::gtest_main)