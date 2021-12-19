// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HeavyBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HEAVYBLOCK
public:
    class HeavyBlock& operator=(class HeavyBlock const&) = delete;
    HeavyBlock(class HeavyBlock const&) = delete;
    HeavyBlock() = delete;
#endif

public:
    /*0*/ virtual ~HeavyBlock();
    /*1*/ virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&) const;
    /*2*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*3*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*4*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*5*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*6*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*7*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const& (class BlockPos const& )> const&, class BlockPos const&) const;
    /*8*/ virtual void __unk_vfn_0();
    /*9*/ virtual bool isStrippable(class Block const&) const;
    /*10*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*11*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*12*/ virtual void __unk_vfn_1();
    /*13*/ virtual void __unk_vfn_2();
    /*14*/ virtual void __unk_vfn_3();
    /*15*/ virtual void __unk_vfn_4();
    /*16*/ virtual void __unk_vfn_5();
    /*17*/ virtual void __unk_vfn_6();
    /*18*/ virtual void __unk_vfn_7();
    /*19*/ virtual void __unk_vfn_8();
    /*20*/ virtual void __unk_vfn_9();
    /*21*/ virtual void __unk_vfn_10();
    /*22*/ virtual bool isDoubleSlabBlock() const;
    /*23*/ virtual void __unk_vfn_11();
    /*24*/ virtual void __unk_vfn_12();
    /*25*/ virtual void __unk_vfn_13();
    /*26*/ virtual void __unk_vfn_14();
    /*27*/ virtual void __unk_vfn_15();
    /*28*/ virtual void __unk_vfn_16();
    /*29*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*30*/ virtual bool isValidAuxValue(int) const;
    /*31*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*32*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*33*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*34*/ virtual void __unk_vfn_17();
    /*35*/ virtual void __unk_vfn_18();
    /*36*/ virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    /*37*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*38*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*39*/ virtual bool shouldDispense(class BlockSource&, class Container&) const;
    /*40*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*41*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*42*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*43*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*44*/ virtual void __unk_vfn_19();
    /*45*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*46*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*47*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*48*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*49*/ virtual int /*enum enum BlockProperty*/ getRedstoneProperty(class BlockSource&, class BlockPos const&) const;
    /*50*/ virtual void __unk_vfn_20();
    /*51*/ virtual bool isFilteredOut(int /*enum enum BlockRenderLayer*/) const;
    /*52*/ virtual void __unk_vfn_21();
    /*53*/ virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    /*54*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, int /*enum enum FertilizerType*/) const;
    /*55*/ virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /*56*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*57*/ virtual bool mayPick() const;
    /*58*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*59*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*60*/ virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    /*61*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*62*/ virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    /*63*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*64*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*65*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*66*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*67*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*68*/ virtual void __unk_vfn_22();
    /*69*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*70*/ virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    /*71*/ virtual bool attack(class Player*, class BlockPos const&) const;
    /*72*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*73*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*74*/ virtual int getExperienceDrop(class Random&) const;
    /*75*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*76*/ virtual void __unk_vfn_23();
    /*77*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*78*/ virtual void __unk_vfn_24();
    /*79*/ virtual void __unk_vfn_25();
    /*80*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*81*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*82*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*83*/ virtual void __unk_vfn_26();
    /*84*/ virtual int getIconYOffset() const;
    /*85*/ virtual bool isAuxValueRelevantForPicking() const;
    /*86*/ virtual int getColor(class Block const&) const;
    /*87*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*88*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*89*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*90*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*91*/ virtual void __unk_vfn_27();
    /*92*/ virtual class Block const& getRenderBlock() const;
    /*93*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*94*/ virtual int /*enum enum Flip*/ getFaceFlip(unsigned char, class Block const&) const;
    /*95*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*96*/ virtual void __unk_vfn_28();
    /*97*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*98*/ virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;
    /*99*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*100*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*101*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*102*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*103*/ virtual void onStandOn(class Actor&, class BlockPos const&) const;
    /*104*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*105*/ virtual void __unk_vfn_29();
    /*106*/ virtual void __unk_vfn_30();
    /*107*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*108*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*109*/ virtual void __unk_vfn_31();
    /*110*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*111*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*112*/ virtual int getExtraRenderLayers() const;
    /*113*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*114*/ virtual void __unk_vfn_32();
    /*115*/ virtual void __unk_vfn_33();
    /*116*/ virtual class mce::Color getDustColor(class Block const&) const = 0;
    /*117*/ virtual std::string getDustParticleName(class Block const&) const = 0;
    /*118*/ virtual void __unk_vfn_34();
    /*119*/ virtual void onLand(class BlockSource&, class BlockPos const&) const;
    /*120*/ virtual bool isFreeToFall(class BlockSource&, class BlockPos const&) const;
    /*121*/ virtual void startFalling(class BlockSource&, class BlockPos const&, class Block const&, bool) const;
    /*
    inline bool falling() const{
        bool (HeavyBlock::*rv)() const;
        *((void**)&rv) = dlsym("?falling@HeavyBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline  ~HeavyBlock(){
         (HeavyBlock::*rv)();
        *((void**)&rv) = dlsym("??1HeavyBlock@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI HeavyBlock(std::string const&, int, class Material const&);
    MCAPI void triggerFallCheck(class BlockSource&, class BlockPos const&) const;

protected:
    MCAPI void _tickBlocksAround2D(class BlockSource&, class BlockPos const&, class Block const&) const;
    MCAPI void checkSlide(class BlockSource&, class BlockPos const&) const;

private:

};