#pragma once
#include "CoreMinimal.h"
#include "SBZSurfaceImpactLod.generated.h"

USTRUCT(BlueprintType)
struct FSBZSurfaceImpactLod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FarRange;
    
    STARBREEZE_API FSBZSurfaceImpactLod();
};

