#pragma once
#include "CoreMinimal.h"
#include "SBZAnimationSpawnedActorCPD.generated.h"

USTRUCT(BlueprintType)
struct FSBZAnimationSpawnedActorCPD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CPDIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CPDValue;
    
    STARBREEZE_API FSBZAnimationSpawnedActorCPD();
};

