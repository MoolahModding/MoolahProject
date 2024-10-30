#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ESBZToolState.h"
#include "SBZEquippable.h"
#include "Templates/SubclassOf.h"
#include "SBZTool.generated.h"

class AActor;
class APlayerController;
class ASBZCharacter;
class ASBZPlayerController;
class UAkAudioEvent;
class UAkRtpc;
class USBZLocalPlayerFeedback;
class USBZToolData;
class USBZToolSkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class ASBZTool : public ASBZEquippable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZToolSkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZToolData* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ToolState, meta=(AllowPrivateAccess=true))
    ESBZToolState ToolState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* InstigatorCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnReadyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnActivatedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnActivatedIdleEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnActivatedUsingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnCanceledEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopAllSoundsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* OnReadyEventRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* OnActivatedEventRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* OnActivatedIdleEventRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* OnActivatedUsingEventRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* OnCanceledRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* LockedPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerController* ActivePlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerController* EquipPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerController* ActiveUsingPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> EquipPlayerFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> ActivePlayerFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> ActiveUsingPlayerFeedback;
    
public:
    ASBZTool(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void StopAllSounds();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetToolState(ESBZToolState NewToolState);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetEquippedAnimationFullyPlayed(bool bInIsEquippedAnimationReady);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CallReady();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToolDestroyed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ToolState(ESBZToolState OldToolState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReady();
    
    UFUNCTION(BlueprintCallable)
    void OnInstigatorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCanceled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivatedUsing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivatedIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivated();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetToolState(ESBZToolState NewToolState);
    
};

