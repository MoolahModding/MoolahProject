#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SBZChatSettings.generated.h"

class USBZChatGameSettings;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class USBZChatSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZChatGameSettings> Schematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZChatGameSettings* CachedSchematic;
    
    USBZChatSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USBZChatGameSettings* GetChatSettings();
    
};

