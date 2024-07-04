#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBZDeveloperSettings.h"
#include "SBZAssetManagerSettings.generated.h"

class USBZAssetLookupData;

UCLASS(Blueprintable, Config=Engine)
class USBZAssetManagerSettings : public USBZDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDirectoryPath> PhysicalMaterialPathArray;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZAssetLookupData> SoftAssetLookupData;
    
public:
    USBZAssetManagerSettings();

};

