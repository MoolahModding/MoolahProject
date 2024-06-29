#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZAIInteractBreakGlassHandler.generated.h"

UCLASS(Blueprintable)
class USBZAIInteractBreakGlassHandler : public UObject {
    GENERATED_BODY()
public:
    USBZAIInteractBreakGlassHandler();

    UFUNCTION(BlueprintCallable)
    void OnBreakGlassInteractionCompleted();
    
};

