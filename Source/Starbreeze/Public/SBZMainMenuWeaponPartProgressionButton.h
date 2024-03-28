#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponPartApplyStatus.h"
#include "SBZMenuButton.h"
#include "SBZWeaponPartProgressionCurrent.h"
#include "SBZMainMenuWeaponPartProgressionButton.generated.h"

class USBZWeaponPartDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuWeaponPartProgressionButton : public USBZMenuButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZWeaponPartProgressionCurrent WeaponPartProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDefault;
    
public:
    USBZMainMenuWeaponPartProgressionButton();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void WeaponPartProgressionInitialized(const FSBZWeaponPartProgressionCurrent& InWeaponPartProgression);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsDefaultButton();
    
    UFUNCTION(BlueprintCallable)
    void SetEquipped(bool bInIsEquipped);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnEquippedChanged(bool bInIsEquipped);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsDefaultButton() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeWeaponPartProgression(const FSBZWeaponPartProgressionCurrent& InWeaponPartProgression);
    
    UFUNCTION(BlueprintPure)
    FSBZWeaponPartProgressionCurrent GetWeaponPartProgression() const;
    
    UFUNCTION(BlueprintPure)
    USBZWeaponPartDataAsset* GetWeaponPart() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetUnlockLevel() const;
    
    UFUNCTION(BlueprintPure)
    ESBZWeaponPartApplyStatus GetPartApplyStatus() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void DefaultButtonSet();
    
};

