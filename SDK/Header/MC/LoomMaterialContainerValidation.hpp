// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LoomMaterialContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOMMATERIALCONTAINERVALIDATION
public:
    class LoomMaterialContainerValidation& operator=(class LoomMaterialContainerValidation const&) = delete;
    LoomMaterialContainerValidation(class LoomMaterialContainerValidation const&) = delete;
    LoomMaterialContainerValidation() = delete;
#endif

public:
    /*0*/ virtual ~LoomMaterialContainerValidation();
    /*1*/ virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;
    /*2*/ virtual bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void __unk_vfn_1();

protected:

private:

};