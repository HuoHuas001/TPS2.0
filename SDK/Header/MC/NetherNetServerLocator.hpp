// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NetherNetServerLocator {

#define AFTER_EXTRA
// Add Member There
public:
struct ServerData {
    ServerData() = delete;
    ServerData(ServerData const&) = delete;
    ServerData(ServerData const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERNETSERVERLOCATOR
public:
    class NetherNetServerLocator& operator=(class NetherNetServerLocator const&) = delete;
    NetherNetServerLocator(class NetherNetServerLocator const&) = delete;
#endif

public:
    /*0*/ virtual ~NetherNetServerLocator();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual void startAnnouncingServer(std::string const&, std::string const&, int /*enum enum GameType*/, int, int, bool);
    /*4*/ virtual void stopAnnouncingServer();
    /*5*/ virtual void startServerDiscovery(struct PortPair);
    /*6*/ virtual void stopServerDiscovery();
    /*7*/ virtual void __unk_vfn_2();
    /*8*/ virtual void __unk_vfn_3();
    /*9*/ virtual std::vector<struct PingedCompatibleServer> getServerList() const;
    /*10*/ virtual void clearServerList();
    /*11*/ virtual void update();
    /*12*/ virtual void __unk_vfn_4();
    /*13*/ virtual void __unk_vfn_5();
    /*14*/ virtual void __unk_vfn_6();
    /*15*/ virtual void __unk_vfn_7();
    MCAPI NetherNetServerLocator();

protected:

private:
    MCAPI void _onBroadcastResponseCallback(unsigned __int64, void const*, int);
    MCAPI void _setBroadcastDiscoveryResponse(struct NetherNetServerLocator::ServerData const&);
    MCAPI void _setIsAnnouncing(bool);
    MCAPI void _setIsDiscovering(bool);
    MCAPI struct PingedCompatibleServer _transformFrom(unsigned __int64, struct NetherNetServerLocator::ServerData const&);

};