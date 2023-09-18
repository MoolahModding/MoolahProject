#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "ESBZCharacterStance.h"
#include "SBZAnimationContainer.h"
#include "SBZAnimationsPerStancesContainer.h"
#include "SBZSoftMontageContainer.h"
#include "SBZBaseCharacterAnimationCollection.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBaseCharacterAnimationCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZAnimationContainer> AnimationContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZCharacterStance, FSBZAnimationsPerStancesContainer> AnimationsPerStances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FSBZSoftMontageContainer> CachedGamePlayTagBasedMontages;
    
    USBZBaseCharacterAnimationCollection();

};

