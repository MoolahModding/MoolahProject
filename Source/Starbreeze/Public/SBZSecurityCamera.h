#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EPD3DispatchCallerReason.h"
#include "EPD3HeistState.h"
#include "ESBZCameraColorState.h"
#include "ESBZCameraOptions.h"
#include "ESBZCameraSoundState.h"
#include "ESBZCameraState.h"
#include "ESBZRuntimeState.h"
#include "SBZAIAttractorInterface.h"
#include "SBZAIVisualDetectorInterface.h"
#include "SBZAutoAimInterface.h"
#include "SBZCameraViewInterface.h"
#include "SBZComponentSelector.h"
#include "SBZExplosionResult.h"
#include "SBZExplosive.h"
#include "SBZHurtReactionData.h"
#include "SBZHurtReactionDataInterface.h"
#include "SBZMarkableInterface.h"
#include "SBZPawnLifetime.h"
#include "SBZPlayerViewingChangedDelegate.h"
#include "SBZRoomVolumeInterface.h"
#include "SBZRuntimeInterface.h"
#include "SBZSecurityCameraDetectionData.h"
#include "SBZTypeInterface.h"
#include "SBZ_BPOnCameraStateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "SBZSecurityCamera.generated.h"

class AActor;
class ASBZRoomVolume;
class UAkAudioEvent;
class UAkRtpc;
class UBoxComponent;
class UGameplayEffect;
class UNiagaraSystem;
class USBZAIAttractorComponent;
class USBZAIVisualDetectionComponent;
class USBZActionNotificationAsset;
class USBZAmbientSoundComponent;
class USBZBaseInteractableComponent;
class USBZHackableInteractableComponent;
class USBZInteractorComponent;
class USBZMarkerComponent;
class USBZOutlineAsset;
class USBZOutlineComponent;
class USBZShoutTargetComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ASBZSecurityCamera : public APawn, public ISBZAIAttractorInterface, public ISBZAIVisualDetectorInterface, public ISBZCameraViewInterface, public ISBZPawnLifetime, public ISBZTypeInterface, public ISBZRuntimeInterface, public ISBZExplosive, public ISBZHurtReactionDataInterface, public ISBZMarkableInterface, public ISBZRoomVolumeInterface, public ISBZAutoAimInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZ_BPOnCameraStateChanged BP_OnCameraStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerViewingChanged OnPlayerViewingChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, USBZActionNotificationAsset*> Escalations;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZActionNotificationAsset* ActionNotificationAssetArray[16];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZHackableInteractableComponent* HackableInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMarkerComponent* MarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIAttractorComponent* AttractorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZComponentSelector CameraBodyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraEyeOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentRotationSpeedYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentRotationSpeedPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SFXMinimumRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRotating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PeripheralVisionAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPD3DispatchCallerReason InvestigateEscalation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RuntimeState, meta=(AllowPrivateAccess=true))
    uint8 RuntimeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsShielded, meta=(AllowPrivateAccess=true))
    bool bIsShielded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CameraState, meta=(AllowPrivateAccess=true))
    ESBZCameraState CameraState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZCameraOptions CameraSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* SecurityCameraRoot;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartLookAtLocation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndLookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TargetCamRotation, meta=(AllowPrivateAccess=true))
    FRotator CameraTargetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentCamRotation, meta=(AllowPrivateAccess=true))
    FRotator CameraCurrentRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CameraLastRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeIndesctructable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShoutTargetComponent* ShoutoutTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineAsset* OutlineAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuspiciousStartValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlarmStartValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlarmSoundDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAmbientSoundComponent* CameraSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RotationStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RotationStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SuspiciousStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SuspiciousStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AlarmStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AlarmStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CameraSilentEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* CameraSuspicionLevelRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* CameraSuspicionLevelPitchRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* CameraRotationVelocityRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* CameraPossessionRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationInterpolationTimeInMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PossessionInterpolationTimeInMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIVisualDetectionComponent* VisualDetectionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RoughDetection, meta=(AllowPrivateAccess=true))
    uint8 RoughDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldTickInEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InterestingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float POIDetectionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyDetectMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalRuntimeMarkedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> EMPEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EMPExplodedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* EMPDetonationEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EMPStunDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerExplosionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIExplosionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionData HurtReactionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RuntimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RuntimeTagsToMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* AutoAimComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ExplosionInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentPOIDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsECMDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZCameraSoundState SoundState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ViewTargetPlayerStateIdArray, meta=(AllowPrivateAccess=true))
    TArray<int32> ViewTargetPlayerStateIdArray;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval YawLimit;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval PitchLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZSecurityCameraDetectionData> PerceivedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PerceivedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DetectedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatisticsMarkCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* CurrentRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CurrentlyMarkedActorsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> HackedByPlayerArray;
    
public:
    ASBZSecurityCamera(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void PlaySoundEvent(UAkAudioEvent* AudioEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnVisualDetection(USBZAIVisualDetectionComponent* DetectionComponent, bool bWasDetected, AActor* DetectedTarget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShieldRemoved();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShieldApplied();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnServerAbortInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRuntimeStateRemoved(ESBZRuntimeState AppliedState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRuntimeStateApplied(ESBZRuntimeState AppliedState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ViewTargetPlayerStateIdArray(const TArray<int32>& OldViewTargetPlayerStateIdArray);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetCamRotation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RuntimeState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RoughDetection();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsShielded();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentCamRotation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CameraState();
    
    UFUNCTION(BlueprintCallable)
    void OnPredictedAbortInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor);
    
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable)
    void OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAckCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAckAbortInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_UpdateRoughDetection(uint8 NewRoughVisualDetectionValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StartNonVisionGeneratorInvestigation();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StartAlarm();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetShielded(bool bInShielded);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetRuntimeExplosionInstigator(AActor* InExplosionInstigator);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetRuntimed(ESBZRuntimeState InRuntimeState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetECMDisabled(bool bInIsDisabled);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_RuntimeExpired(ESBZRuntimeState InRuntimeState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ReplicateExplosion(const FSBZExplosionResult& Result);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_RemoveRuntime(ESBZRuntimeState InRuntimeToRemove);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_RefundRuntime();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnChangeState(ESBZCameraState NewState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_EndViewTarget(int32 PlayerId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_BecomeViewTarget(int32 PlayerId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetRuntimeState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZCameraState GetCameraState() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeRTPC(UAkRtpc* RTPC, float Value, int32 InterpolationTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnViewTargetChanged(bool bIsViewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStateChanged(ESBZCameraState OldState, ESBZCameraState NewState, bool bDoCosmetics);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnIndestructibleCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCameraColorStateChanged(ESBZCameraColorState NewCameraColorState);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetEnabled(bool bEnabled) override PURE_VIRTUAL(SetEnabled, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAttractorInstigator(APawn* NewInstigator) override PURE_VIRTUAL(SetAttractorInstigator,);
    
};

