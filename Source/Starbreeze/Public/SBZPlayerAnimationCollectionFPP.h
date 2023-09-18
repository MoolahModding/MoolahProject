#pragma once
#include "CoreMinimal.h"
#include "SBZAnimationsPerSpecificEquippablesContainer.h"
#include "SBZBaseCharacterAnimationCollection.h"
#include "SBZPlayerAnimationCollectionFPP.generated.h"

class UClass;

UCLASS(Blueprintable)
class USBZPlayerAnimationCollectionFPP : public USBZBaseCharacterAnimationCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UClass>, FSBZAnimationsPerSpecificEquippablesContainer> AnimationLeftHandEquippedContainers;
    
    USBZPlayerAnimationCollectionFPP();

};

