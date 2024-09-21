#pragma once
#include "CoreMinimal.h"
#include "ESBZPowerUpChargesState.h"
#include "SBZPowerUp.h"
#include "SBZPowerUpChargesStateDelegateDelegate.h"
#include "SBZPowerUpCharges.generated.h"

class USBZBaseInteractableComponent;
class USBZInteractorComponent;

UCLASS(Blueprintable)
class ASBZPowerUpCharges : public ASBZPowerUp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoudOnly;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPowerUpChargesStateDelegate OnStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ChargesLeft, meta=(AllowPrivateAccess=true))
    int32 ChargesLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    ESBZPowerUpChargesState CurrentState;
    
public:
    ASBZPowerUpCharges(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetState(ESBZPowerUpChargesState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState(ESBZPowerUpChargesState OldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ChargesLeft();
    
    UFUNCTION(BlueprintCallable)
    void OnAckCompleteInteraction(USBZBaseInteractableComponent* InteractableComp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetState(ESBZPowerUpChargesState NewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZPowerUpChargesState GetCurrentState() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnStateChanged(ESBZPowerUpChargesState OldState, ESBZPowerUpChargesState NewState, bool bDoCosmetics);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnChargesChanged(int32 NewCharges, bool bDoCosmetics);
    
};

