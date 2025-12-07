#pragma once
#include "CoreMinimal.h"
#include "SBZDebugValidatePlayerStatisticTuple.generated.h"

USTRUCT(BlueprintType)
struct FSBZDebugValidatePlayerStatisticTuple {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PreviousValue;
    
    STARBREEZE_API FSBZDebugValidatePlayerStatisticTuple();
};

