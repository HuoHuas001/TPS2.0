// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LevelEventGenericPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELEVENTGENERICPACKET
public:
    class LevelEventGenericPacket& operator=(class LevelEventGenericPacket const&) = delete;
    LevelEventGenericPacket(class LevelEventGenericPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~LevelEventGenericPacket();
    /*1*/ virtual int /*enum enum MinecraftPacketIds*/ getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual bool disallowBatching() const;
    /*5*/ virtual int /*enum enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~LevelEventGenericPacket(){
         (LevelEventGenericPacket::*rv)();
        *((void**)&rv) = dlsym("??1LevelEventGenericPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI LevelEventGenericPacket(enum LevelEvent, class CompoundTag const&);
    MCAPI LevelEventGenericPacket();

protected:

private:

};