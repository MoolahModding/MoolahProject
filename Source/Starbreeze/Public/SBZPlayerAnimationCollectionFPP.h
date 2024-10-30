#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZAnimationsPerSpecificEquippablesContainer.h"
#include "SBZBaseCharacterAnimationCollection.h"
#include "SBZMontageContainer.h"
#include "SBZPlayerAnimationCollectionFPP.generated.h"

class ASBZEquippable;

UCLASS(Blueprintable)
class STARBREEZE_API USBZPlayerAnimationCollectionFPP : public USBZBaseCharacterAnimationCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ASBZEquippable>, FSBZAnimationsPerSpecificEquippablesContainer> AnimationLeftHandEquippedContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FSBZMontageContainer> GamePlayTagBasedMontageContainers;
    
    USBZPlayerAnimationCollectionFPP();

};

