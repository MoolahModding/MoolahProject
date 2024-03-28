#pragma once
#include "CoreMinimal.h"
#include "EPD3MiniGameState.h"
#include "SBZCuttableInterface.h"
#include "SBZGate.h"
#include "SBZInteractableGate.generated.h"

class USBZBaseInteractableComponent;
class USBZInteractableComponent;
class USBZInteractorComponent;
class USBZMiniGameComponent;

UCLASS(Abstract, Blueprintable)
class ASBZInteractableGate : public ASBZGate, public ISBZCuttableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* Interactable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMiniGameComponent* MiniGameComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsMinigameIgnored: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsMinigameFrontOnly: 1;
    
public:
    ASBZInteractableGate();
protected:
    UFUNCTION()
    void OnStartInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor);
    
    UFUNCTION()
    void OnServerCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor);
    
    UFUNCTION()
    void OnPredictedEndInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor);
    
    UFUNCTION()
    void OnMiniGameStateChanged(EPD3MiniGameState OldState, EPD3MiniGameState NewState, bool bInIsLocallyControlled);
    
    UFUNCTION()
    void OnAckRejectedPredictedInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor);
    
    UFUNCTION()
    void OnAckAbortInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor);
    
    
    // Fix for true pure virtual functions not being implemented
};

