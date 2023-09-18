#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Engine/EngineTypes.h"
#include "SBZAccelByteAdminHelper.generated.h"

class USBZMetaDataLoader;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZAccelByteAdminHelper : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GauntletOAuthClientId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GauntletOAuthClientSecret;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BaseUrl;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Namespace;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle LogoutTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZMetaDataLoader* MetaDataLoader;
    
public:
    USBZAccelByteAdminHelper();

    UFUNCTION(BlueprintCallable)
    void CheckLogoutDone(const FString& Email, const FString& Username, const FString& Password);
    
};

