#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SBZGasExplosionData.generated.h"

USTRUCT(BlueprintType)
struct FSBZGasExplosionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize ExplosionLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RemainingLifeTime;
    
    STARBREEZE_API FSBZGasExplosionData();
};

