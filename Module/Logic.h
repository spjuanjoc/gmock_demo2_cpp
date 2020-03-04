//
// Created by juan.castellanos on 4/03/20.
//

#ifndef MODULE_USAGE_H
#define MODULE_USAGE_H

// Logic business
namespace Module
{
struct IModule;
}

namespace Business
{

struct Logic
{
  bool bar(Module::IModule* pMod);
  int setMem(bool val);

private:
  bool _member;
};
}

#endif  //MODULE_USAGE_H
