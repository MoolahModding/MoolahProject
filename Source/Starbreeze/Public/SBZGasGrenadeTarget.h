#pragma once
#include "CoreMinimal.h"
#include "SBZGasGrenadeTarget.generated.h"

class ASBZCharacter;

USTRUCT(BlueprintType)
struct FSBZGasGrenadeTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PendingTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasReceivedDamage;
    
    STARBREEZE_API FSBZGasGrenadeTarget();
};

