#include "SBZSecurityCamera.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZAIAttractorComponent.h"
#include "SBZAmbientSoundComponent.h"
#include "SBZHackableInteractableComponent.h"
#include "SBZMarkerComponent.h"
#include "SBZOutlineComponent.h"
#include "SBZShoutTargetComponent.h"

ASBZSecurityCamera::ASBZSecurityCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HackableInteractable = CreateDefaultSubobject<USBZHackableInteractableComponent>(TEXT("SBZHackableInteractableComponent"));
    this->MarkerComponent = CreateDefaultSubobject<USBZMarkerComponent>(TEXT("SBZMarkerComponent"));
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
    this->RotationSpeed = 100.00f;
    this->CurrentRotationSpeedYaw = 0.00f;
    this->CurrentRotationSpeedPitch = 0.00f;
    this->SFXMinimumRotationSpeed = 10.00f;
    this->bIsRotating = false;
    this->WaitTime = 6.00f;
    this->SightRadius = 1500.00f;
    this->PeripheralVisionAngleDegrees = 45.00f;
    this->InvestigateEscalation = NULL;
    this->RuntimeState = 0;
    this->CameraState = ESBZCameraState::Enabled;
    this->CameraSetting = ESBZCameraOptions::Still;
    this->SecurityCameraRoot = NULL;
    this->bCanDestroy = false;
    this->Health = 1.00f;
    this->ShoutoutTargetComponent = CreateDefaultSubobject<USBZShoutTargetComponent>(TEXT("SBZShoutTargetComponent"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->OutlineAsset = NULL;
    this->SuspiciousStartValue = 0.00f;
    this->AlarmStartValue = 1.00f;
    this->AlarmSoundDuration = 1.50f;
    this->CameraSoundComponent = CreateDefaultSubobject<USBZAmbientSoundComponent>(TEXT("SBZAmbientSoundComponent"));
    this->CameraSoundComponent->SetupAttachment(RootComponent);
    this->RotationStartEvent = NULL;
    this->RotationStopEvent = NULL;
    this->SuspiciousStartEvent = NULL;
    this->SuspiciousStopEvent = NULL;
    this->AlarmStartEvent = NULL;
    this->AlarmStopEvent = NULL;
    this->CameraSilentEvent = NULL;
    this->CameraSuspicionLevelRTPC = NULL;
    this->CameraSuspicionLevelPitchRTPC = NULL;
    this->CameraRotationVelocityRTPC = NULL;
    this->CameraPossessionRTPC = NULL;
    this->RotationInterpolationTimeInMs = 200.00f;
    this->PossessionInterpolationTimeInMs = 200.00f;
    this->VisualDetectionComponent = NULL;
    this->RoughDetection = 0;
    this->bShouldTickInEditor = false;
    this->POIDetectionSpeed = 0.20f;
    this->bOnlyDetectMovement = false;
    this->AdditionalRuntimeMarkedDuration = 3.00f;
    this->EMPEffectClass = NULL;
    this->EMPEffectClass = NULL;
    this->EMPExplodedEvent = NULL;
    this->EMPDetonationEffect = NULL;
    this->EMPStunDuration = 10.00f;
    this->PlayerExplosionRange = 300.00f;
    this->AIExplosionRange = 500.00f;
    this->RuntimeLimit = 5.00f;
    this->AutoAimComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("AutoAimComponent"));
    this->AutoAimComponent->SetupAttachment(RootComponent);
    this->ExplosionInstigator = NULL;
    this->StatisticsMarkCamera = TEXT("mark-camera");
    this->CurrentRoom = NULL;
    FProperty* p_bReplicateMovement = GetClass()->FindPropertyByName("bReplicateMovement");
    *p_bReplicateMovement->ContainerPtrToValuePtr<uint8>(this) = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASBZSecurityCamera::PlaySoundEvent(UAkAudioEvent* AudioEvent) {
}

void ASBZSecurityCamera::OnVisualDetection(USBZAIVisualDetectionComponent* DetectionComponent, bool bWasDetected, AActor* DetectedTarget) {
}

void ASBZSecurityCamera::OnServerAbortInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}



void ASBZSecurityCamera::OnRep_ViewTargetPlayerStateIdArray(const TArray<int32>& OldViewTargetPlayerStateIdArray) {
}

void ASBZSecurityCamera::OnRep_TargetCamRotation() {
}

void ASBZSecurityCamera::OnRep_RuntimeState() {
}

void ASBZSecurityCamera::OnRep_RoughDetection() {
}

void ASBZSecurityCamera::OnRep_CurrentCamRotation() {
}

void ASBZSecurityCamera::OnRep_CameraState() {
}

void ASBZSecurityCamera::OnPredictedAbortInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZSecurityCamera::OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

void ASBZSecurityCamera::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}

void ASBZSecurityCamera::OnAckCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZSecurityCamera::OnAckAbortInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZSecurityCamera::Multicast_UpdateRoughDetection_Implementation(uint8 NewRoughVisualDetectionValue) {
}

void ASBZSecurityCamera::Multicast_StartAlarmSound_Implementation() {
}

void ASBZSecurityCamera::Multicast_SetRuntimeExplosionInstigator_Implementation(AActor* InExplosionInstigator) {
}

void ASBZSecurityCamera::Multicast_SetRuntimed_Implementation(ESBZRuntimeState InRuntimeState) {
}

void ASBZSecurityCamera::Multicast_RuntimeExpired_Implementation(ESBZRuntimeState InRuntimeState) {
}

void ASBZSecurityCamera::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}

void ASBZSecurityCamera::Multicast_RemoveRuntime_Implementation(ESBZRuntimeState InRuntimeToRemove) {
}

void ASBZSecurityCamera::Multicast_OnChangeState_Implementation(ESBZCameraState NewState) {
}

void ASBZSecurityCamera::Multicast_EndViewTarget_Implementation(int32 PlayerId) {
}

void ASBZSecurityCamera::Multicast_BecomeViewTarget_Implementation(int32 PlayerId) {
}

ESBZCameraState ASBZSecurityCamera::GetCameraState() const {
    return ESBZCameraState::Enabled;
}

void ASBZSecurityCamera::ChangeRTPC(UAkRtpc* RTPC, float Value, int32 InterpolationTime) {
}





void ASBZSecurityCamera::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZSecurityCamera, RuntimeState);
    DOREPLIFETIME(ASBZSecurityCamera, CameraState);
    DOREPLIFETIME(ASBZSecurityCamera, CameraTargetRotation);
    DOREPLIFETIME(ASBZSecurityCamera, CameraCurrentRotation);
    DOREPLIFETIME(ASBZSecurityCamera, RoughDetection);
    DOREPLIFETIME(ASBZSecurityCamera, ViewTargetPlayerStateIdArray);
}


