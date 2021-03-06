// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ContainerWeakRef {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERWEAKREF
public:
    class ContainerWeakRef& operator=(class ContainerWeakRef const&) = delete;
    ContainerWeakRef(class ContainerWeakRef const&) = delete;
#endif

public:
    MCAPI ContainerWeakRef(struct ActorUniqueID const&, enum ActorContainerType, class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const&);
    MCAPI ContainerWeakRef(class BlockPos const&, class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const&);
    MCAPI ContainerWeakRef();
    MCAPI operator bool();
    MCAPI ~ContainerWeakRef();

protected:

private:

};