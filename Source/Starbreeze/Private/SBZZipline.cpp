#include "SBZZipline.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"

ASBZZipline::ASBZZipline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bSnapNavLinkEnd = false;
    this->bSnapNavLinkStart = false;
    this->ZiplineType = ESBZZiplineType::Horizontal;
    this->OverlapBox = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapBox"));
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->StartPointMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StartPointMesh"));
    this->EndPointMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndPointMesh"));
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->NavLink = NULL;
    this->MaxDistanceSolverIterations = 2;
    this->ExitLaunchSpeed = 1000.00f;
    this->bDisabledAtStart = false;
    this->bZiplineEnabled = true;
    this->DistanceFromEndToStop = 50.00f;
    this->HalfExtentSizeToAdd = 15.00f;
    this->StartForcedDirectionThreshold = 0.20f;
    this->EndForcedDirectionThreshold = 0.20f;
    this->OverlapBox->SetupAttachment(SplineComponent);
    this->SplineComponent->SetupAttachment(RootComponent);
    this->StartPointMesh->SetupAttachment(RootComponent);
    this->EndPointMesh->SetupAttachment(RootComponent);
}

void ASBZZipline::SetZiplineEnabled(bool bEnabled) {
}

void ASBZZipline::OnZiplineEnabledCallback() {
}

void ASBZZipline::OnZiplineBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZZipline::OnRep_ZiplineEnabled() {
}

void ASBZZipline::OnNavLinkReached(AActor* MovingActor, const FVector& DestinationPoint) {
}

void ASBZZipline::OnCompleteInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZZipline::Multicast_ZiplineEnabled_Implementation(bool bEnabled) {
}


void ASBZZipline::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZZipline, bZiplineEnabled);
}


