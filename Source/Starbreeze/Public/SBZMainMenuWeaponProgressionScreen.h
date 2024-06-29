#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "ESBZEquippableLoadoutSlot.h"
#include "SBZMenuStackScreenWidget.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuWeaponProgressionScreen.generated.h"

class UHorizontalBox;
class USBZMainMenuWeaponPartProgressionButton;
class USBZMainMenuWeaponProgressionDisplayWidget;
class USBZMenuButton;
class USBZWeaponPartDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuWeaponProgressionScreen : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* Panel_WeaponProgressionPartButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuWeaponProgressionDisplayWidget* Widget_WeaponProgressionDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuWeaponPartProgressionButton> WeaponPartProgressionButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin DefaultButtonMargin;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuWeaponPartProgressionButton*> WeaponPartProgressionButtonPool;
    
public:
    USBZMainMenuWeaponProgressionScreen();

private:
    UFUNCTION(BlueprintCallable)
    void OnWeaponPartProgressionButtonFocusedChanged(USBZMenuButton* InButton, bool bIsFocused);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusedWeaponPartChanged(const USBZWeaponPartDataAsset* FocusedWeaponPart);
    
public:
    UFUNCTION(BlueprintCallable)
    bool DisplayWeaponProgressionScreen(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex);
    
};

