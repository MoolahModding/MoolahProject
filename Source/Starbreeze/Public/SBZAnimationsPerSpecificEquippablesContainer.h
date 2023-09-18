#pragma once
#include "CoreMinimal.h"
#include "SBZAnimationContainer.h"
#include "SBZAnimationsPerSpecificEquippablesContainer.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAnimationsPerSpecificEquippablesContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZAnimationContainer> AnimationContainers;
    
    FSBZAnimationsPerSpecificEquippablesContainer();
};

