#include "Module/Logic.h"
#include "Module/Module.h"

#include <iostream>
#include <memory>
#include <gtest/gtest.h>

int main(int argc, char** argv)
{
  std::cout << "Hello, World!" << std::endl;

//  Business::Logic bl;
//  Module::Module* m = new (Module::Module)();
//  bl.bar(m);

  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
  return 0;
}
