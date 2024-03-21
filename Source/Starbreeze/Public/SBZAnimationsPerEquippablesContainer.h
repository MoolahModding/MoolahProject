#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZAnimationContainer.h"
#include "SBZAnimationsPerSpecificEquippablesContainer.h"
#include "SBZSoftMontageContainer.h"
#include "SBZAnimationsPerEquippablesContainer.generated.h"

class ASBZEquippable;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAnimationsPerEquippablesContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZAnimationContainer> AnimationContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FSBZSoftMontageContainer> GamePlayTagBasedMontageContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ASBZEquippable>, FSBZAnimationsPerSpecificEquippablesContainer> AnimationPerSpecificEquippablesContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ASBZEquippable>, FSBZAnimationsPerSpecificEquippablesContainer> AnimationLeftHandEquippedContainers;
    
    FSBZAnimationsPerEquippablesContainer();
};

