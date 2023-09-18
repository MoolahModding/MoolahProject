#pragma once
#include "CoreMinimal.h"
#include "SBZAnimationContainer.h"
#include "SBZBaseCharacterAnimationCollection.h"
#include "SBZEquippableAnimationCollection.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZEquippableAnimationCollection : public USBZBaseCharacterAnimationCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZAnimationContainer> AnimationContainersTP;
    
    USBZEquippableAnimationCollection();

};

