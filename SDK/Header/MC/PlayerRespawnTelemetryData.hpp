// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Social.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PlayerRespawnTelemetryData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERRESPAWNTELEMETRYDATA
public:
    class PlayerRespawnTelemetryData& operator=(class PlayerRespawnTelemetryData const&) = delete;
    PlayerRespawnTelemetryData(class PlayerRespawnTelemetryData const&) = delete;
    PlayerRespawnTelemetryData() = delete;
#endif

public:
    MCAPI void WriteEventData(class Social::Events::Event&) const;

protected:

private:
    MCAPI static std::string const mEventName;

};