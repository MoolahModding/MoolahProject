#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZDeveloperSettings.h"
#include "SBTutorialCharacterSetting.generated.h"

UCLASS(Blueprintable, Config=Engine)
class USBTutorialCharacterSetting : public USBZDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid CharacterGuid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterSku;
    
    USBTutorialCharacterSetting();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTutorialPlayerSku();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetTutorialPlayerGuid();
    
};

