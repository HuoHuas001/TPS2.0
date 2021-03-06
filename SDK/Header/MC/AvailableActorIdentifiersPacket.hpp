// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AvailableActorIdentifiersPacket {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVAILABLEACTORIDENTIFIERSPACKET
public:
    class AvailableActorIdentifiersPacket& operator=(class AvailableActorIdentifiersPacket const&) = delete;
    AvailableActorIdentifiersPacket(class AvailableActorIdentifiersPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~AvailableActorIdentifiersPacket();
    /*1*/ virtual int /*enum enum MinecraftPacketIds*/ getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream&);
    /*5*/ virtual void __unk_vfn_0();
    /*6*/ virtual int /*enum enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~AvailableActorIdentifiersPacket(){
         (AvailableActorIdentifiersPacket::*rv)();
        *((void**)&rv) = dlsym("??1AvailableActorIdentifiersPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI AvailableActorIdentifiersPacket(std::vector<struct ActorInfo> const&);
    MCAPI AvailableActorIdentifiersPacket();

protected:

private:

};