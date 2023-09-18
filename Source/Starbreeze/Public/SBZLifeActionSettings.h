#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZLifeActionSettings.generated.h"

class USBZBaseCharacterAnimationCollection;

UCLASS(Blueprintable)
class USBZLifeActionSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USBZBaseCharacterAnimationCollection>> AnimationCollections;
    
    USBZLifeActionSettings();

};

