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
    float TickCompleteDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCompletePending;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsScreenInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenInteractDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinScreenInteractDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinScreenInteractDot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLocallyControlled;
    
public:
    USBZInteractorComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(Reliable, Server)
    void Server_StopInteraction(USBZBaseInteractableComponent* Interaction);
    
    UFUNCTION(Reliable, Server)
    void Server_StartInteraction(USBZBaseInteractableComponent* Interaction, int32 Id, int8 InModeIndex);
    
public:
    UFUNCTION(Reliable, Server)
    void Server_PredictionTimeout(USBZBaseInteractableComponent* Interaction, int32 Id);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_CompleteInteraction(USBZBaseInteractableComponent* Interaction, int32 Id);
    
    UFUNCTION()
    void OnRep_ReplicatedData(const FSBZReplicatedInteractionData& OldReplicatedData);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StopSimulatedInteraction();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StartSimulatedInteraction(USBZBaseInteractableComponent* Interaction, int8 InModeIndex);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_CompletedInteraction(USBZBaseInteractableComponent* Interaction, bool bIsInstant);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_AbortInteraction(USBZBaseInteractableComponent* Interaction);
    
    UFUNCTION(BlueprintPure)
    USBZBaseInteractableComponent* GetCurrentInteraction() const;
    
protected:
    UFUNCTION(Client, Reliable)
    void Client_StopInteraction(USBZBaseInteractableComponent* Interaction, int32 Id);
    
public:
    UFUNCTION(Client, Reliable)
    void Client_Removed(USBZBaseInteractableComponent* Interaction, int32 Id);
    
    UFUNCTION(BlueprintCallable)
    float BP_GetProgress();
    
    UFUNCTION(BlueprintPure)
    int32 BP_GetModeIndex() const;
    
};

