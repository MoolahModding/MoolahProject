#pragma once
#include "CoreMinimal.h"
#include "SBZStateMachineData.h"
#include "SBZRestartLevelInfo.h"
#include "SBZStateMachineDataRestartLevel.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineDataRestartLevel : public USBZStateMachineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZRestartLevelInfo Params;
    
    USBZStateMachineDataRestartLevel();

};

