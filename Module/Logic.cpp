//
// Created by juan.castellanos on 4/03/20.
//

#include "Logic.h"
#include "IModule.h"

bool Business::Logic::bar(Module::IModule* pMod)
{
  bool result;

  if(_member)
  {
    pMod->foo();
    result = true;
  }
  else
  {
    result = false;
  }


  return result;
}
int Business::Logic::setMem(bool val)
{
  _member = val;
  return 0;
}
