#pragma once
#include "CoreMinimal.h"
#include "SBZStateMachineData.h"
#include "SBZReplayInfo.h"
#include "SBZStateMachineDataReplay.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineDataReplay : public USBZStateMachineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZReplayInfo Params;
    
    USBZStateMachineDataReplay();

};

