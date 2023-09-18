#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESBZCharacterStance.h"
#include "SBZEmotions.h"
#include "SBZEmotionMapping.generated.h"

UCLASS(Blueprintable)
class USBZEmotionMapping : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZCharacterStance, FSBZEmotions> EmotionsPerStance;
    
    USBZEmotionMapping();

};

