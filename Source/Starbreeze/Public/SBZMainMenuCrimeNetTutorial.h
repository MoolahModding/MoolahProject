#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "SBZMenuStackScreenWidget.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuCrimeNetTutorial.generated.h"

class USBZMainMenuCrimeNetHeistButton;
class USBZMenuButton;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuCrimeNetTutorial : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuCrimeNetHeistButton> HeistButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox_HeistButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin HeistButtonPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZMainMenuCrimeNetHeistButton* SelectedHeistButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuCrimeNetHeistButton*> HeistButtonPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> TutorialLevelPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasDisabledButtons;
    
public:
    USBZMainMenuCrimeNetTutorial();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHeistButtonSelected(USBZMainMenuCrimeNetHeistButton* SelectedButton);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHeistButtonFocused(USBZMenuButton* MenuButton, bool bIsFocused);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDisabledHeistButtonSelected(USBZMainMenuCrimeNetHeistButton* SelectedButton);
    
private:
    UFUNCTION()
    void NativeOnHeistButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION()
    void NativeOnHeistButtonFocused(USBZMenuButton* InFocusedButton, bool bIsFocused);
    
    UFUNCTION()
    void NativeOnDisabledHeistButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION()
    void HandlePartyChanged();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void DisableHeistButtons(bool bDisabled);
    
};

