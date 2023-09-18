#pragma once
#include "CoreMinimal.h"
#include "SBZDeveloperSettings.h"
#include "SBZSaveGameSettings.generated.h"

class UClass;

UCLASS(Blueprintable)
class USBZSaveGameSettings : public USBZDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UClass> DefaultProgressionSaveGame;
    
    USBZSaveGameSettings();

};

