//
// Created by juan.castellanos on 4/03/20.
//

#ifndef IMODULE_H
#define IMODULE_H

namespace Module
{

/// interface that is going to be mocked
struct IModule
{
  virtual ~IModule() = default;
  virtual void foo() = 0;
};

}
#endif  //IMODULE_H
