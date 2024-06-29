#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZAIInteractCutGlassHandler.generated.h"

class USBZInteractableComponent;
class USBZInteractorComponent;

UCLASS(Blueprintable)
class USBZAIInteractCutGlassHandler : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* Interactable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZInteractorComponent* Interactor;
    
    USBZAIInteractCutGlassHandler();

    UFUNCTION(BlueprintCallable)
    void OnCutGlassInteractionCompleted();
    
};

