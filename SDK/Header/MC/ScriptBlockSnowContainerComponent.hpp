// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"
#include "BaseScriptBlockLiquidContainerComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptBlockSnowContainerComponent : public BaseScriptBlockLiquidContainerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBLOCKSNOWCONTAINERCOMPONENT
public:
    class ScriptBlockSnowContainerComponent& operator=(class ScriptBlockSnowContainerComponent const&) = delete;
    ScriptBlockSnowContainerComponent(class ScriptBlockSnowContainerComponent const&) = delete;
    ScriptBlockSnowContainerComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptBlockSnowContainerComponent();
    /*
    inline  ~ScriptBlockSnowContainerComponent(){
         (ScriptBlockSnowContainerComponent::*rv)();
        *((void**)&rv) = dlsym("??1ScriptBlockSnowContainerComponent@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI class ScriptBlockSnowContainerComponent& operator=(class ScriptBlockSnowContainerComponent&&);
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptBlockSnowContainerComponent> bind(struct Scripting::Version);
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptBlockSnowContainerComponent> tryCreate(class BlockSource&, class BlockPos, class Scripting::WeakLifetimeScope const&);

protected:

private:

};