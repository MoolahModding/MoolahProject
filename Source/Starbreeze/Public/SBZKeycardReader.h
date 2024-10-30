#pragma once
#include "CoreMinimal.h"
#include "SBZModuleActor.h"
#include "SBZKeycardReader.generated.h"

class USBZBaseInteractableComponent;
class USBZInteractableComponent;
class USBZInteractorComponent;
class USBZOutlineComponent;

UCLASS(Blueprintable)
class ASBZKeycardReader : public ASBZModuleActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* InteractableComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZOutlineComponent* OutlineComponent;
    
public:
    ASBZKeycardReader(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnInteractionStateChanged(const USBZBaseInteractableComponent* Interactable, bool bInNewState);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bIsLocallyControlled);
    
};

