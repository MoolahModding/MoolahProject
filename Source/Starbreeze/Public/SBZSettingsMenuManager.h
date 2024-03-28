#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZOnPopUpClosedDelegate.h"
#include "SBZSettingsMenuManager.generated.h"

class USBZSettingsMenuChildManager;
class USBZSettingsMenuConfig;
class USBZSettingsMenuManager;

UCLASS(Blueprintable)
class USBZSettingsMenuManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnPopUpClosed OnPopUpClosedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSettingsMenuConfig* SettingsMenuConfig;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSettingsMenuChildManager* SubSettings;
    
public:
    USBZSettingsMenuManager();
    UFUNCTION()
    void OnPopUpClosedUnappliedChanges(FName ActionName);
    
    UFUNCTION()
    void OnPopUpClosedConfirmResetToDefault(FName ActionName);
    
    UFUNCTION()
    void OnPopUpClosedConfirmChanges(FName ActionName);
    
    UFUNCTION()
    void OnPopUpClosedConfirmAllChanges(FName ActionName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZSettingsMenuManager* Get(const UObject* WorldContextObject);
    
};

