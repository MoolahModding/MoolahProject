#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESBZFacialEmotion.h"
#include "SBZFacialAnimationContainer.h"
#include "SBZFacialAnimationCollection.generated.h"

UCLASS(Blueprintable)
class USBZFacialAnimationCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZFacialEmotion, FSBZFacialAnimationContainer> Animations;
    
    USBZFacialAnimationCollection();

};

