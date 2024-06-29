#pragma once
#include "CoreMinimal.h"
#include "SBZDeveloperSettings.h"
#include "SBZSecurityCompanySettingData.h"
#include "SBZSecurityCompanySettings.generated.h"

class UObject;

UCLASS(Blueprintable, Config=Engine)
class USBZSecurityCompanySettings : public USBZDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSecurityCompanySettingData Settings;
    
    USBZSecurityCompanySettings();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasReflectorShields(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasLeadGuard(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasIndestructibleCameras(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasHardBargain(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasFacialRecognition(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasDebilitatingSpecials(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasCameraRuntimeLimit(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasBuddySystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasArmorPiercing(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasAlphaStrike(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasAIShielding(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasAICore(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSBZSecurityCompanySettingData Get();
    
};

