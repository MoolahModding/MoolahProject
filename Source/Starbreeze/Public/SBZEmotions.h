#pragma once
#include "CoreMinimal.h"
#include "ESBZFacialEmotion.h"
#include "SBZEmotions.generated.h"

USTRUCT(BlueprintType)
struct FSBZEmotions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBZFacialEmotion> Emotions;
    
    STARBREEZE_API FSBZEmotions();
};

