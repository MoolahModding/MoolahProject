#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "ESBZLootProcessorState.h"
#include "SBZBagFilter.h"
#include "SBZBagHandle.h"
#include "SBZComponentSelector.h"
#include "SBZOnLootProcessorStateChangedDelegateDelegate.h"
#include "SBZLootProcessorBase.generated.h"

class ASBZSabotagePoint;
class UBoxComponent;
class UPrimitiveComponent;
class USBZBagType;
class USBZBaseInteractableComponent;
class USBZInteractableComponent;
class USBZInteractorComponent;
class USBZMarkerDataAsset;
class USceneComponent;

UCLASS(Blueprintable)
class ASBZLootProcessorBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnLootProcessorStateChangedDelegate OnStateChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USBZBagType*, USBZBagType*> BagTypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProcessDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanQueueProcessing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMarkerDataAsset* MarkerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DurationPreplanningTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreplanningProcessDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* ClaimBagInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    ESBZLootProcessorState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BagCount, meta=(AllowPrivateAccess=true))
    int32 BagCount;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentProcessingIndex, meta=(AllowPrivateAccess=true))
    int8 CurrentProcessingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZSabotagePoint*> SabotagePointArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZSabotagePoint* SabotagePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZLootProcessorState SabotageRestoreState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZBagType* BagTypeToReturn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MarkerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZComponentSelector MarkerComponentSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* MarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZBagFilter BagFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZBagHandle> BagHandleQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZBagHandle CurrentBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZBagType*> AllowedBagTypeArray;
    
public:
    ASBZLootProcessorBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetInteractionEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResumeProcessing();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PauseProcessing();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnServerClaimBagInteractComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnSabotagedStateChanged(bool bSabotaged);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentProcessingIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BagCount();
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionEnabledStateChanged(const USBZBaseInteractableComponent* InteractableComponent, bool bInNewState);
    
    UFUNCTION(BlueprintCallable)
    void OnBagBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_UpdateBagCount(int32 NewBagCount);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetState(ESBZLootProcessorState NewState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetCurrentProcessingIndex(uint8 Index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProcessDuration() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRunningStateChanged(ESBZLootProcessorState NewState, bool bDoCosmetics, bool bIsDedicatedServer);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnBagProcessed(const USBZBagType* OldBagType, const USBZBagType* NewBagType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_BagCountUpdated(int32 NumOfBags);
    
};

