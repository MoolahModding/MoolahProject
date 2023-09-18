#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ESBZPlaceableChargeState.h"
#include "SBZOnPlaceableReachedTargetDelegateDelegate.h"
#include "SBZPlaceableBase.h"
#include "SBZPlaceableCharges.generated.h"

class AActor;
class UBoxComponent;
class UClass;
class UProjectileMovementComponent;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
class USBZVoiceCommentDataAsset;

UCLASS(Abstract, Blueprintable)
class ASBZPlaceableCharges : public ASBZPlaceableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnPlaceableReachedTargetDelegate OnPlaceableReachedTargetDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Charges, meta=(AllowPrivateAccess=true))
    float Charges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* ProjectileMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* OutOfBoundsBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* CloakerBMMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TargetLocation, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlaceableChargeState, meta=(AllowPrivateAccess=true))
    ESBZPlaceableChargeState PlaceableChargeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* PlacedVoiceComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CrewAIChatMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAIPlaced;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector MeshRelativeLocation;
    
public:
    ASBZPlaceableCharges(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetPlaceableChargeState(ESBZPlaceableChargeState NewPlaceableChargeState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThrown();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnServerCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlaceableChargeState(ESBZPlaceableChargeState OldPlaceableChargeState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Charges(float OldCharges);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaced();
    
    UFUNCTION(BlueprintCallable)
    void OnParentActorEndPlay(AActor* OldAttachParentActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChargesChanged(float ChargesChangeTo, bool bDoCosmetics);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCanceled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivating();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SpawnCloakerPlaceable();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetPlaceableChargeState(ESBZPlaceableChargeState NewPlaceableChargeState);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetCharges(float NewCharges);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ReachedTargetLocation(const FVector& InTargetLocation, const FRotator& InTargetRotation);
    
};

