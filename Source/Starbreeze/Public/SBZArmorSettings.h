#pragma once
#include "CoreMinimal.h"
#include "ESBZArmorChunkType.h"
#include "SBZArmorChunkTypeData.h"
#include "SBZDeveloperSettings.h"
#include "SBZArmorSettings.generated.h"

class USBZArmorSettings;

UCLASS(Blueprintable, Config=Engine)
class USBZArmorSettings : public USBZDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZArmorChunkTypeData ChunkDataArray[3];
    
public:
    USBZArmorSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZArmorChunkTypeData GetChunkData(ESBZArmorChunkType Type) const;
    
    UFUNCTION(BlueprintCallable)
    static USBZArmorSettings* Get();
    
};

