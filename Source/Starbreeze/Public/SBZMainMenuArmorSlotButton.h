#pragma once
#include "CoreMinimal.h"
#include "SBZArmorInventorySlot.h"
#include "SBZMenuButton.h"
#include "SBZMainMenuArmorSlotButton.generated.h"

class USBZArmorData;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZMainMenuArmorSlotButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZArmorInventorySlot ArmorSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ArmorSlotIndex;
    
public:
    USBZMainMenuArmorSlotButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveArmorSlot(bool bIsActiveArmorSlot);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArmorSlotInitialized();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeArmorSlot(int32 InArmorSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArmorSlotIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZArmorInventorySlot GetArmorSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZArmorData* GetArmorInSlot() const;
    
};

