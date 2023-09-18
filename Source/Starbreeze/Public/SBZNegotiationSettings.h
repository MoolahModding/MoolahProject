#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZNegotiationDifficultySettings.h"
#include "SBZNegotiationSettings.generated.h"

UCLASS(Blueprintable)
class USBZNegotiationSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZNegotiationDifficultySettings DifficultySettingsArray[4];
    
    USBZNegotiationSettings();

};

