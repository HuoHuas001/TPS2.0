#include "pch.h"
#include <EventAPI.h>
#include <LoggerAPI.h>
#include <MC/Player.hpp>
#include <MC/ItemStack.hpp>
#include <time.h>
#include <sys/timeb.h>
#include <regCommandAPI.h>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <LoggerAPI.h>
#include <filesystem>
#include <EventAPI.h>
#include <LLAPI.h>
#include <ServerAPI.h>
#include <RegCommandAPI.h>
#include <MC/CommandOrigin.hpp>
#include <MC/CommandOutput.hpp>
#include <MC/CommandPosition.hpp>
#include <MC/CommandRegistry.hpp>
#include <MC/Packet.hpp>
#include <MC/ServerPlayer.hpp>
#include <MC/VanillaDimensions.hpp>

using namespace std;

Logger logger("TPS");


//全局变量
int tick = 0;
const double reset_ticks = 20.0;
long long time_old = 0;
long long time_new = 0;

long long getTimeStamp()
{
    timeb t;
    ftime(&t);
    return t.time * 1000 + t.millitm;
}

double getTps() {
    double w = 1000.0;
    double tpsns = w * (reset_ticks / (time_new - time_old));
    stringstream sStream;
    sStream << fixed << setprecision(2) << tpsns;
    sStream >> tpsns;
    if (tpsns > 20) {
        tpsns = 20.0;
    }
    return tpsns;
}


std::string Convert(double Num)
{
    std::ostringstream oss;
    oss << Num;
    std::string str(oss.str());
    return str;
}


class TPSCommand : public Command {
public:
    void execute(CommandOrigin const& ori, CommandOutput& outp) const override {
        std::string tpsString = Convert(getTps());
        outp.success("TPS:" + tpsString);
    }

    static void setup(CommandRegistry* registry) {
        registry->registerCommand(
            "tps",
            "Show Server's TPS",
            CommandPermissionLevel::GameMasters,
            { (CommandFlagValue)0 },
            { (CommandFlagValue)0x80 });
        registry->registerOverload<TPSCommand>("tps");
    }
};

THook(void, "?tick@Level@@UEAAXXZ", void* self) {
    original(self);
    try {
        ++tick;
        if (tick == reset_ticks) {
            tick = 0;
            time_old = time_new;
            time_new = getTimeStamp();
            //cout << time_old << " " << time_new << " " << time_new-time_old <<"\n";
        }
    }
    catch (const char*& e) {
        //ERROR(e);
    }

}

void PluginInit()
{
    long long timeTemp = getTimeStamp();
    time_old = timeTemp;
    time_new = timeTemp;
    Event::RegCmdEvent::subscribe([](Event::RegCmdEvent ev) { // Register commands
        TPSCommand::setup(ev.mCommandRegistry);
        return true;
        });
    Logger("TPS").info("TPS Loaded. By HuoHuaX");
}