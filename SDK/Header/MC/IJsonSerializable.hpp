// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class IJsonSerializable {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IJSONSERIALIZABLE
public:
    class IJsonSerializable& operator=(class IJsonSerializable const&) = delete;
    IJsonSerializable(class IJsonSerializable const&) = delete;
    IJsonSerializable() = delete;
#endif

public:
    /*0*/ virtual ~IJsonSerializable();
    /*
    inline  ~IJsonSerializable(){
         (IJsonSerializable::*rv)();
        *((void**)&rv) = dlsym("??1IJsonSerializable@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};