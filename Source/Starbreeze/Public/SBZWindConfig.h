#pragma once
#include "CoreMinimal.h"
#include "SBZDeveloperSettings.h"
#include "SBZWindConfig.generated.h"

class USBZWindConfig;

UCLASS(Blueprintable)
class STARBREEZE_API USBZWindConfig : public USBZDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWindSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FoliageMaterialFunctionNames;
    
    USBZWindConfig();
    UFUNCTION(BlueprintPure)
    static USBZWindConfig* Get();
    
};

