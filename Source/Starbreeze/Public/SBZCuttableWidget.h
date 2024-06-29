#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZCuttableWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZCuttableWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USBZCuttableWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetInitialCut(float AtSegment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetCutCounterClockwise(float DeltaDegrees);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetCutCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetCutClockwise(float DeltaDegrees);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetCut(float AtSegment);
    
};

