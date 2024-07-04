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
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WeaponPartProgressionInitialized(const FSBZWeaponPartProgressionCurrent& InWeaponPartProgression);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsDefaultButton();
    
    UFUNCTION(BlueprintCallable)
    void SetEquipped(bool bInIsEquipped);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquippedChanged(bool bInIsEquipped);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefaultButton() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeWeaponPartProgression(const FSBZWeaponPartProgressionCurrent& InWeaponPartProgression);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZWeaponPartProgressionCurrent GetWeaponPartProgression() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZWeaponPartDataAsset* GetWeaponPart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnlockLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZWeaponPartApplyStatus GetPartApplyStatus() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DefaultButtonSet();
    
};

