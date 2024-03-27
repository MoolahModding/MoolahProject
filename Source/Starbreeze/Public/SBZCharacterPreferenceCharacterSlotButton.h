#pragma once
#include "CoreMinimal.h"
#include "OnCharacterPreferenceSlotButtonSelectedDelegate.h"
#include "SBZWidgetBase.h"
#include "SBZCharacterPreferenceCharacterSlotButton.generated.h"

class USBZPlayerCharacterData;

UCLASS(Blueprintable, EditInlineNew)
class USBZCharacterPreferenceCharacterSlotButton : public USBZWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterPreferenceSlotButtonSelected OnCharacterPreferenceSlotButtonSelected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerCharacterData* CharacterInSlot;
    
public:
    USBZCharacterPreferenceCharacterSlotButton();
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool bInIsLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetIndexNone();
    
    UFUNCTION(BlueprintCallable)
    void SetIndex(int32 InItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetEmpty();
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterInSlot(const USBZPlayerCharacterData* InCharacterInSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool bInIsActive);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLockedChanged(bool bInIsLocked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnIndexChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHovered(bool bIsHovered);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEmptySet();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnClicked();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCharacterInSlotChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActiveChanged(bool bInIsActive);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDisplayIndex() const;
    
};

