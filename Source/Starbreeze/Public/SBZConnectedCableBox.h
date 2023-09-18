#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZCableBoxDelegateDelegate.h"
#include "SBZComponentSelector.h"
#include "SBZOnCompleteDelegateDelegate.h"
#include "SBZConnectedCableBox.generated.h"

class USBZBaseInteractableComponent;
class USBZInteractableComponent;
class USBZInteractorComponent;

UCLASS(Blueprintable)
class ASBZConnectedCableBox : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnCompleteDelegate OnComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCableBoxDelegate OnDoorOpened;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZComponentSelector DoorInteractableSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZComponentSelector> CableInteractablesSelectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllowedChances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> CurrentCorrectSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentSequenceIndex, meta=(AllowPrivateAccess=true))
    int32 CurrentSequenceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_InteractionStates, meta=(AllowPrivateAccess=true))
    uint8 InteractionStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DoorOpen, meta=(AllowPrivateAccess=true))
    bool bIsDoorOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText CurrentModelNumberText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZInteractableComponent*> CableInteractables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* DoorInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentCorrectColorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FailCounter, meta=(AllowPrivateAccess=true))
    uint8 FailCounter;
    
public:
    ASBZConnectedCableBox(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetCorrectColorSequence(const TArray<int32> CorrectSequence);
    
    UFUNCTION(BlueprintCallable)
    void SetCorrectColorIndex(const int32 InCorrectColorIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_InteractionStates();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FailCounter();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DoorOpen();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentSequenceIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnDoorInteractionComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnCableInteractionComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EnableInteraction(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_UpdateModelNumber(const FText& ModelNumberText);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_UpdateInputsMade(int32 InputsMade);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_UpdateFailCounter(int32 NumberOfFails);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OpenDoor(bool bDoCosmetics);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnComplete(bool bWasSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_FlipSwitch(int32 Index, bool bDoCosmetics, bool bReset);
    
};

