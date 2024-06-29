#pragma once
#include "CoreMinimal.h"
#include "SBZDeveloperSettings.h"
#include "SBZSaveGameSettings.generated.h"

class USBZProgressionSaveChallenges;
class USBZProgressionSaveGame;

UCLASS(Blueprintable, Config=Engine)
class USBZSaveGameSettings : public USBZDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USBZProgressionSaveGame> DefaultProgressionSaveGame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USBZProgressionSaveChallenges> DefaultProgressionSaveChallenges;
    
    USBZSaveGameSettings();

};

