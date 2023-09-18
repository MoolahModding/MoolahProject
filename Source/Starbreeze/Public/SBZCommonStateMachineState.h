#pragma once
#include "CoreMinimal.h"
#include "SBZStateMachineState.h"
#include "AsyncLoadLevelParams.h"
#include "SBZAsyncLoadLevelInterface.h"
#include "SBZCommonStateMachineState.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZCommonStateMachineState : public USBZStateMachineState, public ISBZAsyncLoadLevelInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AsyncLoadingTimeOutTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AsyncLoadingTimeSliceOverride;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AsyncLoadingTimeSliceDefaultValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplayEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncLoadLevelParams AsyncLoadLevelParams;
    
public:
    USBZCommonStateMachineState();


    // Fix for true pure virtual functions not being implemented
};

