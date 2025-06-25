#pragma once
#include "CoreMinimal.h"
#include "SBZAttributeGUIEffectData.generated.h"

class USBZCharacterEffectDataAsset;

USTRUCT(BlueprintType)
struct FSBZAttributeGUIEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCharacterEffectDataAsset* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Default;
    
    STARBREEZE_API FSBZAttributeGUIEffectData();
};

