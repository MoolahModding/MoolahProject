#pragma once
#include "CoreMinimal.h"
#include "SBZNavButtonParameters.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZMenuNavBar.generated.h"

class UPanelWidget;
class USBZMenuNavBarButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZMenuNavBar : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoveForwardActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoveBackwardActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZNavButtonParameters> NavigationButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMenuNavBarButton> NavigationButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ButtonContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAffectedByInstallProgress;
    
public:
    USBZMenuNavBar();
    UFUNCTION(BlueprintCallable)
    void SetActiveTab(const FName& InTabName);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTabbedForward();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTabbedBackward();
    
private:
    UFUNCTION()
    void OnInstallStateChanged(bool NewState);
    
    UFUNCTION()
    void OnForwardInputPressed();
    
    UFUNCTION()
    void OnBackwardInputPressed();
    
public:
    UFUNCTION(BlueprintPure)
    bool HasStackFocus() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FSBZNavButtonParameters> GetNavigationParameters() const;
    
};

