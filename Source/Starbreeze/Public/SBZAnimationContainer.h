#pragma once
#include "CoreMinimal.h"
#include "SBZAnimationContainer.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAnimationContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimationAsset*> Animations;
    
    FSBZAnimationContainer();
};

