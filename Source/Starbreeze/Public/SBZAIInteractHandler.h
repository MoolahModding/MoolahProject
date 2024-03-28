#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZAIInteractHandler.generated.h"

class USBZBaseInteractableComponent;
class USBZInteractableComponent;
class USBZInteractorComponent;

UCLASS(Blueprintable)
class USBZAIInteractHandler : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* Interactable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZInteractorComponent* Interactor;
    
    USBZAIInteractHandler();
    UFUNCTION()
    void OnInteractionStarted(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled);
    
    UFUNCTION()
    void OnInteractionCompleted(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bIsLocallyControlled);
    
};

