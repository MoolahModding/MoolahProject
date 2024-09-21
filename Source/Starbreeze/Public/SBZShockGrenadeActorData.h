#pragma once
#include "CoreMinimal.h"
#include "SBZShockGrenadeActorData.generated.h"

USTRUCT(BlueprintType)
struct FSBZShockGrenadeActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ChainNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsExplosionTriggered;
    
    STARBREEZE_API FSBZShockGrenadeActorData();
};

