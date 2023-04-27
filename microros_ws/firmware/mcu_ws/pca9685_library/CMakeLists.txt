cmake_minimum_required(VERSION 3.5)
project(pca9685_library)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

include_directories(include)

add_library(pca9685_library src/pca9685.c)

ament_export_targets(pca9685_library HAS_LIBRARY_TARGET)

install(
  DIRECTORY include/pca9685_library
  DESTINATION include 
  )

install(
  TARGETS pca9685_library
  EXPORT pca9685_library
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib 
  RUNTIME DESTINATION bin 
  INCLUDES DESTINATION include
  )
  
ament_package()
