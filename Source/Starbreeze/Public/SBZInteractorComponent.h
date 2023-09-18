#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "SBZReplicatedInteractionData.h"
#include "SBZInteractorComponent.generated.h"

class USBZBaseInteractableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZInteractorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedData, meta=(AllowPrivateAccess=true))
    FSBZReplicatedInteractionData ReplicatedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZBaseInteractableComponent* CurrentInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZBaseInteractableComponent* LastInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZBaseInteractableComponent* ServerCompletingInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 InteractId;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int8 ModeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 ModeRaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult InteractionTraceResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInteractionSignalRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenInteractDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinScreenInteractDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinScreenInteractDot;
    
public:
    USBZInteractorComponent();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StopInteraction(USBZBaseInteractableComponent* Interaction);
    
    UFUNCTION(Reliable, Server)
    void Server_StartInteraction(USBZBaseInteractableComponent* Interaction, int32 Id, int8 InModeIndex);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PredictionTimeout(USBZBaseInteractableComponent* Interaction, int32 Id);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_CompleteInteraction(USBZBaseInteractableComponent* Interaction, int32 Id);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedData(const FSBZReplicatedInteractionData& OldReplicatedData);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StopSimulatedInteraction();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StartSimulatedInteraction(USBZBaseInteractableComponent* Interaction, int8 InModeIndex);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_CompletedInteraction(USBZBaseInteractableComponent* Interaction, bool bIsInstant);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AbortInteraction(USBZBaseInteractableComponent* Interaction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZBaseInteractableComponent* GetCurrentInteraction() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StopInteraction(USBZBaseInteractableComponent* Interaction, int32 Id);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_Removed(USBZBaseInteractableComponent* Interaction, int32 Id);
    
    UFUNCTION(BlueprintCallable)
    float BP_GetProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BP_GetModeIndex() const;
    
};

