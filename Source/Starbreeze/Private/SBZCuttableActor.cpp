#include "SBZCuttableActor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"
#include "SBZCuttableComponent.h"
#include "SBZCuttableSplineComponent.h"
#include "SBZInteractableComponent.h"

ASBZCuttableActor::ASBZCuttableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->CuttableVFXComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->WholeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WholeMesh"));
    this->CutMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CutMesh"));
    this->CutOutlineMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CircleOutlineMesh"));
    this->MeltingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeltingMesh"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->CuttableComponent = CreateDefaultSubobject<USBZCuttableComponent>(TEXT("SBZCuttableComponent"));
    this->CuttableSplineComponent = CreateDefaultSubobject<USBZCuttableSplineComponent>(TEXT("SBZCuttableSplineComponent"));
    this->MaterialInterface = NULL;
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->bIsHinged = false;
    this->CuttableSplineComponent->SetupAttachment(RootComponent);
    this->CuttableVFXComponent->SetupAttachment(RootComponent);
    this->WholeMesh->SetupAttachment(RootComponent);
    this->CutMesh->SetupAttachment(RootComponent);
    this->CutOutlineMesh->SetupAttachment(RootComponent);
    this->MeltingMesh->SetupAttachment(RootComponent);
    this->BoxComponent->SetupAttachment(RootComponent);
}

void ASBZCuttableActor::PropDamageReached() {
}

void ASBZCuttableActor::OnServerCompleteInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}


void ASBZCuttableActor::OnBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBZCuttableActor::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



