// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PredictedMovementComponent {

#define AFTER_EXTRA
// Add Member There
public:
struct RuntimePredictionData {
    RuntimePredictionData() = delete;
    RuntimePredictionData(RuntimePredictionData const&) = delete;
    RuntimePredictionData(RuntimePredictionData const&&) = delete;
};
struct PredictionDbgData {
    PredictionDbgData() = delete;
    PredictionDbgData(PredictionDbgData const&) = delete;
    PredictionDbgData(PredictionDbgData const&&) = delete;
};
struct HistoryItem {
    HistoryItem() = delete;
    HistoryItem(HistoryItem const&) = delete;
    HistoryItem(HistoryItem const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PREDICTEDMOVEMENTCOMPONENT
public:
    class PredictedMovementComponent& operator=(class PredictedMovementComponent const&) = delete;
    PredictedMovementComponent(class PredictedMovementComponent const&) = delete;
    PredictedMovementComponent() = delete;
#endif

public:
    MCAPI PredictedMovementComponent(class Actor&);
    MCAPI bool isEnabled() const;
    MCAPI void reset();
    MCAPI void tick(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000> > > const&);

protected:

private:
    MCAPI void _debugLog(struct PredictedMovementComponent::PredictionDbgData const&) const;
    MCAPI bool _isDebugLoggingEnabled() const;
    MCAPI void _sendPredictionEvent(enum MovePredictionType, class Vec3 const&) const;
    MCAPI void _tickNextPosition(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000> > > const&);
    MCAPI bool _tryIfTeleport(class std::shared_ptr<struct PredictedMovementComponent::HistoryItem const> const&, class std::shared_ptr<struct PredictedMovementComponent::HistoryItem const> const&, bool);
    MCAPI bool _tryInterpolate(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000> > > const&);
    MCAPI static unsigned int const LERP_STEP_SIZE;
    MCAPI static std::unique_ptr<struct PredictedMovementComponent::RuntimePredictionData> mGlobalRuntimePredictionData;

};