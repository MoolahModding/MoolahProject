#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerStatePawnWidgetBase.h"
#include "PD3ReviveInteractionWidget.generated.h"

class USBZBaseInteractableComponent;
class USBZInteractorComponent;

UCLASS(Blueprintable, EditInlineNew)
class UPD3ReviveInteractionWidget : public USBZPlayerStatePawnWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
public:
    UPD3ReviveInteractionWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReviveInteractionStarted();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReviveInteractionEndedInternal(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReviveInteractionEnded();
    
};

