#pragma once
#include "CoreMinimal.h"
#include "SBZStateMachineData.h"
#include "ESBZReturnToIISReason.h"
#include "SBZStateMachineDataIIS.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineDataIIS : public USBZStateMachineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZReturnToIISReason ReturnReason;
    
    USBZStateMachineDataIIS();

};

