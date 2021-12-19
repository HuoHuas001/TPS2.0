// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ChemistryStickItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHEMISTRYSTICKITEM
public:
    class ChemistryStickItem& operator=(class ChemistryStickItem const&) = delete;
    ChemistryStickItem(class ChemistryStickItem const&) = delete;
    ChemistryStickItem() = delete;
#endif

public:
    /*0*/ virtual ~ChemistryStickItem();
    /*1*/ virtual void tearDown();
    /*2*/ virtual int getMaxUseDuration(class ItemStack const*) const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void __unk_vfn_1();
    /*5*/ virtual void executeEvent(class ItemStackBase&, std::string const&, class RenderParams&) const;
    /*6*/ virtual void __unk_vfn_2();
    /*7*/ virtual bool isArmor() const;
    /*8*/ virtual bool isBlockPlanterItem() const;
    /*9*/ virtual void __unk_vfn_3();
    /*10*/ virtual void __unk_vfn_4();
    /*11*/ virtual bool isDyeable() const;
    /*12*/ virtual bool isDye() const;
    /*13*/ virtual int /*enum enum ItemColor*/ getItemColor() const;
    /*14*/ virtual bool isFertilizer() const;
    /*15*/ virtual void __unk_vfn_5();
    /*16*/ virtual bool isThrowable() const;
    /*17*/ virtual bool isUseable() const;
    /*18*/ virtual class ItemComponent* getComponent(class HashedString const&) const;
    /*19*/ virtual class FuelItemComponent* getFuel() const;
    /*20*/ virtual class Item& setMaxDamage(int);
    /*21*/ virtual int /*enum enum BlockShape*/ getBlockShape() const;
    /*22*/ virtual bool canDestroySpecial(class Block const&) const;
    /*23*/ virtual int getLevelDataForAuxValue(int) const;
    /*24*/ virtual short getMaxDamage() const;
    /*25*/ virtual int getAttackDamage() const;
    /*26*/ virtual bool isGlint(class ItemStackBase const&) const;
    /*27*/ virtual void __unk_vfn_6();
    /*28*/ virtual int getPatternIndex() const;
    /*29*/ virtual void __unk_vfn_7();
    /*30*/ virtual bool isWearableThroughLootTable(class CompoundTag const*) const;
    /*31*/ virtual bool canDestroyInCreative() const;
    /*32*/ virtual bool isDestructive(int) const;
    /*33*/ virtual bool isLiquidClipItem(int) const;
    /*34*/ virtual bool shouldInteractionWithBlockBypassLiquid(class Block const&) const;
    /*35*/ virtual bool requiresInteract() const;
    /*36*/ virtual bool isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;
    /*37*/ virtual int getEnchantSlot() const;
    /*38*/ virtual int getEnchantValue() const;
    /*39*/ virtual int getArmorValue() const;
    /*40*/ virtual void __unk_vfn_8();
    /*41*/ virtual bool isValidAuxValue(int) const;
    /*42*/ virtual float getViewDamping() const;
    /*43*/ virtual void __unk_vfn_9();
    /*44*/ virtual void __unk_vfn_10();
    /*45*/ virtual void __unk_vfn_11();
    /*46*/ virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;
    /*47*/ virtual bool hasCustomColor(class CompoundTag const*) const;
    /*48*/ virtual void __unk_vfn_12();
    /*49*/ virtual void clearColor(class ItemStackBase&) const;
    /*50*/ virtual void clearColor(class CompoundTag*) const;
    /*51*/ virtual void setColor(class ItemStackBase&, class mce::Color const&) const;
    /*52*/ virtual void __unk_vfn_13();
    /*53*/ virtual void __unk_vfn_14();
    /*54*/ virtual void __unk_vfn_15();
    /*55*/ virtual void __unk_vfn_16();
    /*56*/ virtual bool canUseOnSimTick() const;
    /*57*/ virtual class ItemStack& use(class ItemStack&, class Player&) const;
    /*58*/ virtual int /*enum enum ItemUseMethod*/ useTimeDepleted(class ItemStack&, class Level*, class Player*) const;
    /*59*/ virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;
    /*60*/ virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;
    /*61*/ virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const;
    /*62*/ virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;
    /*63*/ virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const;
    /*64*/ virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;
    /*65*/ virtual void __unk_vfn_17();
    /*66*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const&) const;
    /*67*/ virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const;
    /*68*/ virtual void refreshedInContainer(class ItemStackBase const&, class Level&) const;
    /*69*/ virtual void fixupCommon(class ItemStackBase&) const;
    /*70*/ virtual void fixupCommon(class ItemStackBase&, class Level&) const;
    /*71*/ virtual void __unk_vfn_18();
    /*72*/ virtual void __unk_vfn_19();
    /*73*/ virtual bool validFishInteraction(int) const;
    /*74*/ virtual std::string getInteractText(class Player const&) const;
    /*75*/ virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;
    /*76*/ virtual int getIconYOffset() const;
    /*77*/ virtual bool canBeCharged() const;
    /*78*/ virtual void playSoundIncrementally(class ItemStack const&, class Mob&) const;
    /*79*/ virtual void __unk_vfn_20();
    /*80*/ virtual std::string getAuxValuesDescription() const;
    /*81*/ virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, unsigned char&, class BlockPos&) const;
    /*
    inline bool uniqueAuxValues() const{
        bool (ChemistryStickItem::*rv)() const;
        *((void**)&rv) = dlsym("?uniqueAuxValues@ChemistryStickItem@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool showsDurabilityInCreative() const{
        bool (ChemistryStickItem::*rv)() const;
        *((void**)&rv) = dlsym("?showsDurabilityInCreative@ChemistryStickItem@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline  ~ChemistryStickItem(){
         (ChemistryStickItem::*rv)();
        *((void**)&rv) = dlsym("??1ChemistryStickItem@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ChemistryStickItem(std::string const&, int);
    MCAPI static enum ItemColor getColorType(int);
    MCAPI static bool isActive(int);
    MCAPI static bool isChemistryStick(class ItemStackBase const&);

protected:
    MCAPI std::string _getColorName(int) const;
    MCAPI bool _tick(class ItemStack&, unsigned __int64) const;

private:
    MCAPI void _storeActivationTimestamp(class ItemStack&, unsigned __int64, int) const;
    MCAPI static std::string const ACTIVATION_TIMESTAMP_TAG;
    MCAPI static int const ACTIVE_BIT;
    MCAPI static int const COLOR_BITS;
    MCAPI static int const COLOR_MASK;
    MCAPI static int const DAMAGE_BITS;
    MCAPI static int const DAMAGE_MASK;
    MCAPI static int const DAMAGE_START_BIT;

};