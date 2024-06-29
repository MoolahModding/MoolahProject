#pragma once
#include "CoreMinimal.h"
#include "ESBZCharacterPreferenceButtonSelectionAction.h"
#include "SBZCharacterSlotData.h"
#include "SBZMenuStackScreenWidgetWithTutorial.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuInventoryCharacterPreferenceScreen.generated.h"

class UPanelWidget;
class USBZMainMenuCharacterDisplayPanel;
class USBZMainMenuInventoryCharacterPreferenceDisplay;
class USBZMainMenuInventoryCharacterSlotButton;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuInventoryCharacterPreferenceScreen : public USBZMenuStackScreenWidgetWithTutorial {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClearCharactersInputActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuInventoryCharacterSlotButton> CharacterSlotButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_CharacterSlotButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuInventoryCharacterPreferenceDisplay* Widget_CharacterPreferenceDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuCharacterDisplayPanel* Widget_CharacterDisplayPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZMainMenuInventoryCharacterSlotButton* FocusedCharacterSlotButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZCharacterSlotData> PreferredCharacterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuInventoryCharacterSlotButton*> CharacterSlotButtonPool;
    
public:
    USBZMainMenuInventoryCharacterPreferenceScreen();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCharacterSlotButtonControlsReference(ESBZCharacterPreferenceButtonSelectionAction SelectionAction);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnClearPreferredCharactersInputPressed();
    
private:
    UFUNCTION(BlueprintCallable)
    void NativeOnCharacterPreferenceUpdated();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnActiveCharacterSlotIndexChanged(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void NativeCharacterSlotButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION(BlueprintCallable)
    void NativeCharacterSlotButtonFocusedChanged(USBZMenuButton* InFocusedButton, bool bIsFocused);
    
protected:
    UFUNCTION(BlueprintCallable)
    void IncrementSlot();
    
    UFUNCTION(BlueprintCallable)
    void DecrementSlot();
    
};

