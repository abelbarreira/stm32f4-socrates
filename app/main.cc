/**
 * \file main.cc
 *
 * \brief Main entry point for the application
 *
 * \details This file contains the main function that serves as the entry point
 * for the application. It includes the necessary headers and uses the functions
 * from the modules defined in the project.
 */
#include <iostream>

#include "module_a.hpp"
#include "module_b.hpp"
#include "module_c.hpp"

/**
 * \file main.cc
 *
 * \brief Main entry point for the application
 */
int main() {
  std::cout << "Hello World!" << std::endl;

  // Use module_a
  module_a::u16 mod_a_len = 16;
  std::cout << "Module A " << mod_a_len << std::endl;

  // Use module_b
  module_b::module_b_funct();

  // Use module_c
  module_c::module_c_funct(mod_a_len);

#if defined(BUILD_TYPE_DEBUG)
  std::cout << "Debug build" << std::endl;
#elif defined(BUILD_TYPE_RELEASE)
  std::cout << "Release build" << std::endl;
#elif defined(BUILD_TYPE_RELWITHDEBINFO)
  std::cout << "RelWithDebInfo build" << std::endl;
#elif defined(BUILD_TYPE_MINSIZEREL)
  std::cout << "MinSizeRel build" << std::endl;
#else
  std::cout << "Unknown build type" << std::endl;
#endif

  return 0;
}
