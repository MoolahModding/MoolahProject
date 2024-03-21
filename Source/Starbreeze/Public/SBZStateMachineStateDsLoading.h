#pragma once
#include "CoreMinimal.h"
#include "SBZDsStateMachineState.h"
#include "SBZStateMachineStateDsLoading.generated.h"

class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateDsLoading : public USBZDsStateMachineState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOutAck;
    
public:
    USBZStateMachineStateDsLoading();
protected:
    UFUNCTION(BlueprintCallable)
    void DestinationMapLoaded(UWorld* NewWorld);
    
};

