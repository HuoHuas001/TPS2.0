// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MobEquipmentPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEQUIPMENTPACKET
public:
    class MobEquipmentPacket& operator=(class MobEquipmentPacket const&) = delete;
    MobEquipmentPacket(class MobEquipmentPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~MobEquipmentPacket();
    /*1*/ virtual int /*enum enum MinecraftPacketIds*/ getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual bool disallowBatching() const;
    /*5*/ virtual int /*enum enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~MobEquipmentPacket(){
         (MobEquipmentPacket::*rv)();
        *((void**)&rv) = dlsym("??1MobEquipmentPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI MobEquipmentPacket(class ActorRuntimeID, class ItemStack const&, int, int, enum ContainerID);
    MCAPI MobEquipmentPacket(class ActorRuntimeID, class NetworkItemStackDescriptor const&, int, int, enum ContainerID);
    MCAPI MobEquipmentPacket();

protected:

private:

};