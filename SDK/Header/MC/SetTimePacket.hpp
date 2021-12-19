// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SetTimePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETTIMEPACKET
public:
    class SetTimePacket& operator=(class SetTimePacket const&) = delete;
    SetTimePacket(class SetTimePacket const&) = delete;
#endif

public:
    /*0*/ virtual ~SetTimePacket();
    /*1*/ virtual int /*enum enum MinecraftPacketIds*/ getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual bool disallowBatching() const;
    /*5*/ virtual int /*enum enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~SetTimePacket(){
         (SetTimePacket::*rv)();
        *((void**)&rv) = dlsym("??1SetTimePacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI SetTimePacket(int);
    MCAPI SetTimePacket();

protected:

private:

};