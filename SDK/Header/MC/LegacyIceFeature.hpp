// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LegacyIceFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYICEFEATURE
public:
    class LegacyIceFeature& operator=(class LegacyIceFeature const&) = delete;
    LegacyIceFeature(class LegacyIceFeature const&) = delete;
    LegacyIceFeature() = delete;
#endif

public:
    /*0*/ virtual ~LegacyIceFeature();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    MCAPI LegacyIceFeature(class FeatureRegistry const&);

protected:

private:

};