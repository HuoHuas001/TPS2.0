// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ChanceInformation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHANCEINFORMATION
public:
    class ChanceInformation& operator=(class ChanceInformation const&) = delete;
    ChanceInformation(class ChanceInformation const&) = delete;
    ChanceInformation() = delete;
#endif

public:
    MCAPI bool isValid() const;
    MCAPI bool roll(class Random&) const;
    MCAPI void set(unsigned int, unsigned int);
    MCAPI void set(float);

protected:

private:

};