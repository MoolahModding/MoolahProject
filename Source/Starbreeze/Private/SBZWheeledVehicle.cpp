#include "SBZWheeledVehicle.h"
#include "AIController.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"
#include "SBZAmbientSoundRadioComponent.h"
#include "SBZVehicleSplineFollowingComponent.h"
#include "SBZWheeledVehicleAudioComponent.h"
#include "SBZWheeledVehicleMovementComponent.h"
#include "SBZWheeledVehicleNavModifierComponent.h"
#include "SBZWheeledVehicleSkeletalMeshComponent.h"

ASBZWheeledVehicle::ASBZWheeledVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBZWheeledVehicleSkeletalMeshComponent>(TEXT("VehicleMesh")).SetDefaultSubobjectClass<USBZWheeledVehicleMovementComponent>(TEXT("MovementComp"))) {
    this->AudioComponent = CreateDefaultSubobject<USBZWheeledVehicleAudioComponent>(TEXT("Sound System Component"));
    this->AudioComponent->SetupAttachment(GetMesh());
    this->RadioComponent = CreateDefaultSubobject<USBZAmbientSoundRadioComponent>(TEXT("Radio Component"));
    this->RadioComponent->SetupAttachment(GetMesh());
    this->ActiveLightsBitmask = 0;
    this->AnimationCollection = NULL;
    this->VariationSetData = NULL;
    this->NavModifierComponent = CreateDefaultSubobject<USBZWheeledVehicleNavModifierComponent>(TEXT("SBZWheeledVehicleNavModifierComponent"));
    this->SplineFollowingComponent = CreateDefaultSubobject<USBZVehicleSplineFollowingComponent>(TEXT("SBZVehicleSplineFollowingComponent"));
    this->ObstacleCheckInterval = 0.04f;
    this->Seed = -1;
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->AIControllerClass = AAIController::StaticClass();
    FProperty* p_bReplicateMovement = GetClass()->FindPropertyByName("bReplicateMovement");
    *p_bReplicateMovement->ContainerPtrToValuePtr<uint8>(this) = false;
    FProperty* p_Mesh_Prior = GetClass()->FindPropertyByName("Mesh");
    this->RootComponent = *p_Mesh_Prior->ContainerPtrToValuePtr<USBZWheeledVehicleSkeletalMeshComponent*>(this);
}

void ASBZWheeledVehicle::SetLightType(ESBZVehicleLightType LightType, bool bIsOn) {
}

void ASBZWheeledVehicle::SetLightCPDBroken(int32 CPDIndex, ESBZVehicleLightCPD LightBit, bool bIsBroken) {
}

void ASBZWheeledVehicle::SetDoorState(ESBZVehicleDoorType DoorType, ESBZVehicleDoorState DoorState) {
}

void ASBZWheeledVehicle::OnSwitchSplineDirectionCallback(ASBZSpline* Spline) {
}

void ASBZWheeledVehicle::OnStoppedCallback() {
}

void ASBZWheeledVehicle::OnSplineLeftCallback(ASBZSpline* Spline) {
}

void ASBZWheeledVehicle::OnSplineEnteredCallback(ASBZSpline* Spline, bool bPathEntered, bool bTeleportToPathStart) {
}

void ASBZWheeledVehicle::OnSplineEndReachedCallback(ASBZSpline* Spline) {
}

void ASBZWheeledVehicle::OnRep_Seed() {
}

void ASBZWheeledVehicle::OnRep_RepMove() {
}

void ASBZWheeledVehicle::OnRep_DoorStatesPerType() {
}

void ASBZWheeledVehicle::OnPathEndReachedCallback() {
}

void ASBZWheeledVehicle::OnBeginStopCallback() {
}

void ASBZWheeledVehicle::Multicast_SetDoorState_Implementation(ESBZVehicleDoorType DoorType, ESBZVehicleDoorState DoorState) {
}

USBZVehicleSplineFollowingComponent* ASBZWheeledVehicle::GetVehicleSplineFollowingComponent() const {
    return NULL;
}

ESBZVehicleDoorState ASBZWheeledVehicle::GetDoorState(ESBZVehicleDoorType DoorType) const {
    return ESBZVehicleDoorState::Opened;
}

void ASBZWheeledVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZWheeledVehicle, DoorStatesPerType);
    DOREPLIFETIME(ASBZWheeledVehicle, RepMove);
    DOREPLIFETIME(ASBZWheeledVehicle, Seed);
}


