// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FurnaceContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SmokerContainerManagerModel : public FurnaceContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SMOKERCONTAINERMANAGERMODEL
public:
    class SmokerContainerManagerModel& operator=(class SmokerContainerManagerModel const&) = delete;
    SmokerContainerManagerModel(class SmokerContainerManagerModel const&) = delete;
    SmokerContainerManagerModel() = delete;
#endif

public:
    /*0*/ virtual ~SmokerContainerManagerModel();
    /*1*/ virtual int /*enum enum ContainerID*/ getContainerId() const;
    /*2*/ virtual void setContainerId(int /*enum enum ContainerID*/);
    /*3*/ virtual int /*enum enum ContainerType*/ getContainerType() const;
    /*4*/ virtual void setContainerType(int /*enum enum ContainerType*/);
    MCAPI SmokerContainerManagerModel(enum ContainerID, class Player&, class BlockPos const&);

protected:

private:

};