// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MessagingCommand {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MESSAGINGCOMMAND
public:
    class MessagingCommand& operator=(class MessagingCommand const&) = delete;
    MessagingCommand(class MessagingCommand const&) = delete;
    MessagingCommand() = delete;
#endif

public:
    /*0*/ virtual ~MessagingCommand();
    /*
    inline  ~MessagingCommand(){
         (MessagingCommand::*rv)();
        *((void**)&rv) = dlsym("??1MessagingCommand@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:
    MCAPI MessagingCommand(bool, bool);
    MCAPI bool checkChatPermissions(class CommandOrigin const&, class CommandOutput&) const;

private:

};