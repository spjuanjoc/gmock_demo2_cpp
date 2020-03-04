//
// Created by juan.castellanos on 4/03/20.
//

#ifndef TEST_MOCKIMODULE_H
#define TEST_MOCKIMODULE_H

#include "IModule.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

struct MockIModule : public Module::IModule
{
  MOCK_METHOD0(foo, void());
};

#endif  //TEST_MOCKIMODULE_H
