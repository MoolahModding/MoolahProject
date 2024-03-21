#pragma once
#include "CoreMinimal.h"
#include "SBZInteractDisplayDataCollection.h"
#include "SBZPlayerStatePawnWidgetBase.h"
#include "SBZInteractionWidget.generated.h"

class USBZPlayerInteractorComponent;

UCLASS(Blueprintable, EditInlineNew)
class USBZInteractionWidget : public USBZPlayerStatePawnWidgetBase {
    GENERATED_BODY()
public:
    USBZInteractionWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerIsInteracting(const USBZPlayerInteractorComponent* Interactor, bool bIsInteracting);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewInteractionCollection(const USBZPlayerInteractorComponent* Interactor, const FSBZInteractDisplayDataCollection& NewInteractionCollection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCasingChanged(bool bIsCasing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAISeenPlayer(bool bIsSeenByAI);
    
};

