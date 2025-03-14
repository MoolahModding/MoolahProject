#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESBZBreakableMachineState.h"
#include "SBZPropDamageContext.h"
#include "SBZBreakableMachine.generated.h"

class UActorComponent;
class USBZAIAttractorComponent;
class USBZBaseInteractableComponent;
class USBZBreakableMachineInteractableComponent;
class USBZInteractorComponent;
class USBZPropDamageComponent;

UCLASS(Blueprintable)
class ASBZBreakableMachine : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBreakableMachineInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZPropDamageComponent* PropDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIAttractorComponent* AttractorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InstantLootName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 InstantLootCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    ESBZBreakableMachineState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InstantLootTaken, meta=(AllowPrivateAccess=true))
    uint8 InstantLootTaken;
    
public:
    ASBZBreakableMachine(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetState(ESBZBreakableMachineState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InstantLootTaken();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState(ESBZBreakableMachineState OldState);
    
    UFUNCTION(BlueprintCallable)
    void OnPropDamageHits(UActorComponent* PoolComponent, int32 Hits, bool bDoCosmetics, const FSBZPropDamageContext& DamageContext);
    
    UFUNCTION(BlueprintCallable)
    void OnECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive);
    
    UFUNCTION(BlueprintCallable)
    void OnAckCompleteInteraction(USBZBaseInteractableComponent* Comp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetCurrentState(ESBZBreakableMachineState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStateChanged(ESBZBreakableMachineState OldState, ESBZBreakableMachineState NewState, bool bDoCosmetics);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnInstantLootTaken(int32 TotalAmountTaken);
    
};

