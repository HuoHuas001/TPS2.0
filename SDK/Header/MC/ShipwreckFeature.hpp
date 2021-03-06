// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ShipwreckFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHIPWRECKFEATURE
public:
    class ShipwreckFeature& operator=(class ShipwreckFeature const&) = delete;
    ShipwreckFeature(class ShipwreckFeature const&) = delete;
    ShipwreckFeature() = delete;
#endif

public:
    /*0*/ virtual ~ShipwreckFeature();
    /*1*/ virtual bool getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool);
    /*2*/ virtual bool isFeatureChunk(class BiomeSource const&, class Random&, class ChunkPos const&, unsigned int, class IPreliminarySurfaceProvider const&);
    /*3*/ virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);
    /*
    inline  ~ShipwreckFeature(){
         (ShipwreckFeature::*rv)();
        *((void**)&rv) = dlsym("??1ShipwreckFeature@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ShipwreckFeature(class OceanMonumentFeature&, unsigned int, class BaseGameVersion const&);

protected:

private:

};