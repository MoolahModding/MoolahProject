#pragma once
#include "CoreMinimal.h"
#include "SBZMenuACSlots.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FSBZMenuACSlots {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAnimationAsset>> Animations;
    
    STARBREEZE_API FSBZMenuACSlots();
};

