#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZAIInteractHandler.generated.h"

class USBZBaseInteractableComponent;
class USBZInteractorComponent;

UCLASS(Blueprintable)
class USBZAIInteractHandler : public UObject {
    GENERATED_BODY()
public:
    USBZAIInteractHandler();

    UFUNCTION(BlueprintCallable)
    void OnInteractionStarted(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionCompleted(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bIsLocallyControlled);
    
};

