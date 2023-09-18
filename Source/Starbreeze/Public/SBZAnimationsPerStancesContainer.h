#pragma once
#include "CoreMinimal.h"
#include "ESBZEquippableFamily.h"
#include "SBZAnimationsPerEquippablesContainer.h"
#include "SBZAnimationsPerStancesContainer.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAnimationsPerStancesContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZEquippableFamily, FSBZAnimationsPerEquippablesContainer> AnimationContainersPerEquippables;
    
    FSBZAnimationsPerStancesContainer();
};

