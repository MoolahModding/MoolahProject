#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "OnPreferredCharacterSlotIndexChangedDelegate.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuInventoryCharacterPreferenceDisplay.generated.h"

class UHorizontalBox;
class USBZCharacterPreferenceCharacterSlotButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuInventoryCharacterPreferenceDisplay : public USBZWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreferredCharacterSlotIndexChanged OnPreferredCharacterSlotIndexChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_CharacterDisplays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZCharacterPreferenceCharacterSlotButton> CharacterDisplayWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin CharacterDisplayPanelPadding;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZCharacterPreferenceCharacterSlotButton*> PreferredCharacterSlotButtonPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveIndex;
    
public:
    USBZMainMenuInventoryCharacterPreferenceDisplay();

    UFUNCTION(BlueprintCallable)
    void SetActiveIndex(int32 NewActiveIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void NativeOnPreferredCharacterSlotButtonSelected(USBZCharacterPreferenceCharacterSlotButton* SelectedPreferredCharacterSlotButton);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveSlotEmpty() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void InitializeCharacterDisplays();
    
public:
    UFUNCTION(BlueprintCallable)
    void IncrementActiveIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void DecrementActiveIndex();
    
};

