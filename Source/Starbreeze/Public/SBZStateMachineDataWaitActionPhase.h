#pragma once
#include "CoreMinimal.h"
#include "SBZStateMachineData.h"
#include "SBZStateMachineDataWaitActionPhase.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineDataWaitActionPhase : public USBZStateMachineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetLevelIdx;
    
    USBZStateMachineDataWaitActionPhase();

};

