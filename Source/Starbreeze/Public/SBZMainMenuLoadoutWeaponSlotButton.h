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
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeaponSlotInitialized();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPresetWeaponSlot() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeWeaponSlot(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex);
    
    UFUNCTION(BlueprintPure)
    int32 GetWeaponSlotIndex() const;
    
    UFUNCTION(BlueprintPure)
    USBZInventoryBaseData* GetWeaponInventoryData() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetWeaponInSlotLevel() const;
    
    UFUNCTION(BlueprintPure)
    USBZEquippableData* GetWeaponInSlot() const;
    
    UFUNCTION(BlueprintPure)
    ESBZEquippableLoadoutSlot GetEquippableSlot() const;
    
    UFUNCTION(BlueprintPure)
    void GetEntitlementAndWeaponID(FGuid& EntitlementID, FGuid& ItemID) const;
    
};

