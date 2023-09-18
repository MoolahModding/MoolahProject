#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "SBZMenuStackScreenWidget.h"
#include "SBZMainMenuCrimeNetTutorial.generated.h"

class UClass;
class USBZMainMenuCrimeNetHeistButton;
class USBZMenuButton;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuCrimeNetTutorial : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* HeistButtonClass;
    
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
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeistButtonSelected(USBZMainMenuCrimeNetHeistButton* SelectedButton);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeistButtonFocused(USBZMenuButton* MenuButton, bool bIsFocused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisabledHeistButtonSelected(USBZMainMenuCrimeNetHeistButton* SelectedButton);
    
private:
    UFUNCTION(BlueprintCallable)
    void NativeOnHeistButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnHeistButtonFocused(USBZMenuButton* InFocusedButton, bool bIsFocused);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnDisabledHeistButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION(BlueprintCallable)
    void HandlePartyChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableHeistButtons(bool bDisabled);
    
};

