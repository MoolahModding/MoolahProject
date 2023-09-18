#pragma once
#include "CoreMinimal.h"
#include "SBZHitResultLite.h"
#include "SBZAgentNavState.generated.h"

USTRUCT(BlueprintType)
struct FSBZAgentNavState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastFloorCheckZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectionTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHitResultLite CachedProjectedNavMeshHitResult;
    
    STARBREEZE_API FSBZAgentNavState();
};

