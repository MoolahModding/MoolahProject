#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZCuttableWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZCuttableWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USBZCuttableWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void OnWidgetInitialCut(float AtSegment);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWidgetCutCounterClockwise(float DeltaDegrees);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWidgetCutCompleted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWidgetCutClockwise(float DeltaDegrees);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWidgetCut(float AtSegment);
    
};

