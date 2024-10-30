#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZMenuStackScreenWidget.h"
#include "SBZMainMenuCrimeNetTutorial.generated.h"

class USBZMainMenuCrimeNetHeistButton;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuCrimeNetTutorial : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZMainMenuCrimeNetHeistButton* SelectedHeistButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuCrimeNetHeistButton*> HeistButtonPool;
    
private:
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
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeTutorialButton(int32 InLevelIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePartyChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableHeistButtons(bool bDisabled);
    
};

