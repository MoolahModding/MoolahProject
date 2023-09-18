#pragma once
#include "CoreMinimal.h"
#include "SBZAIOrder_TacticalMoveTo.h"
#include "SBZAIOrder_Rescue.generated.h"

class APawn;
class USBZOutlineAsset;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_Rescue : public USBZAIOrder_TacticalMoveTo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineAsset* RescueTargetOutline;
    
public:
    USBZAIOrder_Rescue();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetKilled(APawn* KilledPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetHostageStateChanged(uint8 NewHostageState);
    
};

