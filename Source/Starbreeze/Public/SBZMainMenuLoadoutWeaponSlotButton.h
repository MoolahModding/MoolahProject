#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZEquippableLoadoutSlot.h"
#include "SBZMenuButton.h"
#include "SBZWeaponInventorySlot.h"
#include "SBZMainMenuLoadoutWeaponSlotButton.generated.h"

class USBZEquippableData;
class USBZInventoryBaseData;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuLoadoutWeaponSlotButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZWeaponInventorySlot WeaponSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZEquippableLoadoutSlot EquippableSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WeaponSlotIndex;
    
public:
    USBZMainMenuLoadoutWeaponSlotButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveWeaponSlot(bool bIsActiveWeaponSlot);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponSlotInitialized();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPresetWeaponSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeWeaponSlot(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponSlotIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZInventoryBaseData* GetWeaponInventoryData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponInSlotLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZEquippableData* GetWeaponInSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZEquippableLoadoutSlot GetEquippableSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEntitlementAndWeaponID(FGuid& EntitlementID, FGuid& ItemID) const;
    
};

