#pragma once
#include "CoreMinimal.h"
#include "ESBZTutorialType.h"
#include "SBZMenuStackScreenWidget.h"
#include "SBZMenuStackScreenWidgetWithTutorial.generated.h"

class UCanvasPanel;
class USBZMenuMouseButton;
class USBZMenuTutorialMouseButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZMenuStackScreenWidgetWithTutorial : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TutorialDisplayAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TutorialCloseAlternativeAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_Tutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuTutorialMouseButton* Button_ToggleHelp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZTutorialType TutorialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTutorialShowing;
    
public:
    USBZMenuStackScreenWidgetWithTutorial();

protected:
    UFUNCTION(BlueprintCallable)
    void ToggleShowingTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTutorialHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTutorialDisplayed();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTutorialButtonSelected(USBZMenuMouseButton* Button);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowingTutorial() const;
    
};

