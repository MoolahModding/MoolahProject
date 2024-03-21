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
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockedChanged(bool bInIsLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIndexChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHovered(bool bIsHovered);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEmptySet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterInSlotChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveChanged(bool bInIsActive);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDisplayIndex() const;
    
};

