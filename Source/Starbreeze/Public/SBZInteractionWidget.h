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
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerIsInteracting(const USBZPlayerInteractorComponent* Interactor, bool bIsInteracting);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNewInteractionCollection(const USBZPlayerInteractorComponent* Interactor, const FSBZInteractDisplayDataCollection& NewInteractionCollection);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCasingChanged(bool bIsCasing);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAISeenPlayer(bool bIsSeenByAI);
    
};

