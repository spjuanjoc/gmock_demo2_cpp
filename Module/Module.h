//
// Created by juan.castellanos on 4/03/20.
//

#ifndef MODULE_H
#define MODULE_H

#include "IModule.h"

namespace Module
{

/// Implementation of the interface methods
struct Module : IModule
{
  ~Module() override = default;
  void foo() override;
};

}
#endif  //MODULE_H
