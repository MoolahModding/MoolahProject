#pragma once
#include "CoreMinimal.h"
#include "SBZFragGrenade.h"
#include "SBZFragGrenadeCluster.generated.h"

UCLASS(Abstract, Blueprintable)
class ASBZFragGrenadeCluster : public ASBZFragGrenade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalRandomDelay;
    
public:
    ASBZFragGrenadeCluster(const FObjectInitializer& ObjectInitializer);

};

