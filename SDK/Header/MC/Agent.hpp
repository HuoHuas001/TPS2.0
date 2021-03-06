// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Agent : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENT
public:
    class Agent& operator=(class Agent const&) = delete;
    Agent(class Agent const&) = delete;
    Agent() = delete;
#endif

public:
    /*0*/ virtual void initializeComponents(int /*enum enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*1*/ virtual ~Agent();
    /*2*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*5*/ virtual void __unk_vfn_1();
    /*6*/ virtual void teleportTo(class Vec3 const&, bool, int, int);
    /*7*/ virtual void normalTick();
    /*8*/ virtual float getRidingHeight();
    /*9*/ virtual bool isInvisible() const;
    /*10*/ virtual bool canShowNameTag() const;
    /*11*/ virtual void __unk_vfn_2();
    /*12*/ virtual std::string getFormattedNameTag() const;
    /*13*/ virtual void __unk_vfn_3();
    /*14*/ virtual float getCameraOffset() const;
    /*15*/ virtual void __unk_vfn_4();
    /*16*/ virtual void __unk_vfn_5();
    /*17*/ virtual void playerTouch(class Player&);
    /*18*/ virtual bool isPickable();
    /*19*/ virtual void __unk_vfn_6();
    /*20*/ virtual void __unk_vfn_7();
    /*21*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*22*/ virtual void __unk_vfn_8();
    /*23*/ virtual void __unk_vfn_9();
    /*24*/ virtual void __unk_vfn_10();
    /*25*/ virtual void __unk_vfn_11();
    /*26*/ virtual class Actor* findAttackTarget();
    /*27*/ virtual bool isValidTarget(class Actor*) const;
    /*28*/ virtual void adjustDamageAmount(int&) const;
    /*29*/ virtual void onTame();
    /*30*/ virtual void onFailedTame();
    /*31*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*32*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*33*/ virtual void handleEntityEvent(int /*enum enum ActorEvent*/, int);
    /*34*/ virtual float getPickRadius();
    /*35*/ virtual void awardKillScore(class Actor&, int);
    /*36*/ virtual void setCarriedItem(class ItemStack const&);
    /*37*/ virtual class HashedString const& queryEntityRenderer() const;
    /*38*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*39*/ virtual int getPortalWaitTime() const;
    /*40*/ virtual bool canChangeDimensions() const;
    /*41*/ virtual void __unk_vfn_12();
    /*42*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*43*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*44*/ virtual bool canBePulledIntoVehicle() const;
    /*45*/ virtual void __unk_vfn_13();
    /*46*/ virtual bool canSynchronizeNewEntity() const;
    /*47*/ virtual bool canBeAffected(class MobEffectInstance const&) const;
    /*48*/ virtual void __unk_vfn_14();
    /*49*/ virtual void __unk_vfn_15();
    /*50*/ virtual bool isWorldBuilder() const;
    /*51*/ virtual void __unk_vfn_16();
    /*52*/ virtual bool isAdventure() const;
    /*53*/ virtual bool canDestroyBlock(class Block const&) const;
    /*54*/ virtual void setAuxValue(int);
    /*55*/ virtual void stopSpinAttack();
    /*56*/ virtual void __unk_vfn_17();
    /*57*/ virtual void __unk_vfn_18();
    /*58*/ virtual void kill();
    /*59*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*60*/ virtual void __unk_vfn_19();
    /*61*/ virtual bool _hurt(class ActorDamageSource const&, int, bool, bool);
    /*62*/ virtual void __unk_vfn_20();
    /*63*/ virtual void __unk_vfn_21();
    /*64*/ virtual void knockback(class Actor*, int, float, float, float, float, float);
    /*65*/ virtual void spawnAnim();
    /*66*/ virtual void travel(float, float, float);
    /*67*/ virtual void aiStep();
    /*68*/ virtual int getItemUseDuration() const;
    /*69*/ virtual float getItemUseStartupProgress() const;
    /*70*/ virtual float getItemUseIntervalProgress() const;
    /*71*/ virtual void __unk_vfn_22();
    /*72*/ virtual bool isAlliedTo(class Mob*);
    /*73*/ virtual void __unk_vfn_23();
    /*74*/ virtual void sendArmorDamage(class std::bitset<4> const&);
    /*75*/ virtual bool createAIGoals();
    /*76*/ virtual void onBorn(class Actor&, class Actor&);
    /*77*/ virtual int getAttackTime();
    /*78*/ virtual float _getWalkTargetValue(class BlockPos const&);
    /*79*/ virtual bool canExistWhenDisallowMob() const;
    /*80*/ virtual void __unk_vfn_24();
    /*81*/ virtual std::unique_ptr<class BodyControl> initBodyControl();
    /*82*/ virtual void _serverAiMobStep();
    /*83*/ virtual void __unk_vfn_25();
    /*
    inline bool isTargetable() const{
        bool (Agent::*rv)() const;
        *((void**)&rv) = dlsym("?isTargetable@Agent@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool interactPreventDefault(){
        bool (Agent::*rv)();
        *((void**)&rv) = dlsym("?interactPreventDefault@Agent@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool getAlwaysShowNameTag() const{
        bool (Agent::*rv)() const;
        *((void**)&rv) = dlsym("?getAlwaysShowNameTag@Agent@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool breaksFallingBlocks() const{
        bool (Agent::*rv)() const;
        *((void**)&rv) = dlsym("?breaksFallingBlocks@Agent@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI Agent(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class OwnerPtrT<struct EntityRefTraits> const&);
    MCAPI float getMoveSpeedScalar() const;
    MCAPI int getSelectedSlot() const;
    MCAPI bool isValidSlotNum(int);
    MCAPI void setNameTagFromOwner(class Player const&);
    MCAPI void startCommandMode();
    MCAPI void stopCommandMode();
    MCAPI bool swingAnimationCompleted();
    MCAPI void swingArm();
    MCAPI void tryFireCreateEvent(class Player&);
    MCAPI static class Vec3 roundTeleportPos(class Vec3 const&);

protected:

private:

};