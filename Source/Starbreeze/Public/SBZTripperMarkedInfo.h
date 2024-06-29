#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBZTripperMarkedInfo.generated.h"

class ASBZTripper;

USTRUCT(BlueprintType)
struct FSBZTripperMarkedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZTripper* MarkedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle UnmarkTimerHandle;
    
    STARBREEZE_API FSBZTripperMarkedInfo();
};

