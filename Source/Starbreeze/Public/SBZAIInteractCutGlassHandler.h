#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZAIInteractCutGlassHandler.generated.h"

UCLASS(Blueprintable)
class USBZAIInteractCutGlassHandler : public UObject {
    GENERATED_BODY()
public:
    USBZAIInteractCutGlassHandler();

    UFUNCTION(BlueprintCallable)
    void OnCutGlassInteractionCompleted();
    
};

