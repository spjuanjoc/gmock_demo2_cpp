#include "Module/Logic.h"
#include "Module/Module.h"

#include <iostream>
//#include <memory>
#include <gtest/gtest.h>

void foo()
{
  Business::Logic bl{};
  auto m = new (Module::Module)();/// \todo to shared_ptr
  bl.bar(m);
}

int main(int argc, char** argv)
{
  std::cout << "Hello, World!" << std::endl;
  foo();

  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
