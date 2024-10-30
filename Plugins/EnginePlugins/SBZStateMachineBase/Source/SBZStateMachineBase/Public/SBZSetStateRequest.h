#pragma once
#include "CoreMinimal.h"
#include "SBZSetStateRequest.generated.h"

class USBZStateMachineData;

USTRUCT(BlueprintType)
struct FSBZSetStateRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZStateMachineData* Data;
    
    SBZSTATEMACHINEBASE_API FSBZSetStateRequest();
};

