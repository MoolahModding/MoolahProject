#pragma once
#include "CoreMinimal.h"
#include "SBZDeveloperSettings.h"
#include "SBZWorldSettingsDeveloperSettings.generated.h"

class UMaterialParameterCollection;
class UNiagaraParameterCollection;
class USBZLifeActionSettings;
class USBZSurfaceTypesConfig;

UCLASS(Blueprintable)
class USBZWorldSettingsDeveloperSettings : public USBZDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZSurfaceTypesConfig> SoftSurfaceTypesConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialParameterCollection> MaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraParameterCollection> NiagaraParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZLifeActionSettings> DefaultLifeActionSettings;
    
    USBZWorldSettingsDeveloperSettings();
};

