// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ClientToServerHandshakePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTTOSERVERHANDSHAKEPACKET
public:
    class ClientToServerHandshakePacket& operator=(class ClientToServerHandshakePacket const&) = delete;
    ClientToServerHandshakePacket(class ClientToServerHandshakePacket const&) = delete;
#endif

public:
    /*0*/ virtual ~ClientToServerHandshakePacket();
    /*1*/ virtual int /*enum enum MinecraftPacketIds*/ getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual bool disallowBatching() const;
    /*5*/ virtual int /*enum enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
    MCAPI ClientToServerHandshakePacket();

protected:

private:

};