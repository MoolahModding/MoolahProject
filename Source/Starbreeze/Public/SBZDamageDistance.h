#pragma once
#include "CoreMinimal.h"
#include "SBZDamageDistance.generated.h"

USTRUCT(BlueprintType)
struct FSBZDamageDistance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    STARBREEZE_API FSBZDamageDistance();
};

