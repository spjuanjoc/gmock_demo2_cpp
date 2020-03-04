//
// Created by juan.castellanos on 4/03/20.
//

#include "MockIModule.h"
#include "Logic.h"

#include <iostream>

/// Test Fixture for Logic component
struct TestLogic : public testing::Test
{
  MockIModule mock;
  Business::Logic l{};

  void SetUp() override
  {
    l.setMem(true);
    std::cout << "SetUp\n";
  }
  void TearDown() override
  {
    std::cout << "TearDown\n";
  }
};

TEST_F(TestLogic, TestBar)
{
  EXPECT_CALL(mock, foo)
    .Times(testing::Exactly(1));

  l.bar(&mock);

}

TEST(Empty, TestEmpty)
{
  std::cout << "Hello tests" << std::endl;
}