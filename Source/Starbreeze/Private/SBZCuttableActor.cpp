#include "SBZCuttableActor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"
#include "SBZCuttableComponent.h"
#include "SBZCuttableSplineComponent.h"
#include "SBZInteractableComponent.h"

ASBZCuttableActor::ASBZCuttableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CuttableVFXComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->WholeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WholeMesh"));
    this->WholeMesh->SetupAttachment(RootComponent);
    this->CutMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CutMesh"));
    this->CutMesh->SetupAttachment(RootComponent);
    this->CutOutlineMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CircleOutlineMesh"));
    this->CutOutlineMesh->SetupAttachment(RootComponent);
    this->MeltingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeltingMesh"));
    this->MeltingMesh->SetupAttachment(RootComponent);
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->BoxComponent->SetupAttachment(RootComponent);
    this->CuttableComponent = CreateDefaultSubobject<USBZCuttableComponent>(TEXT("SBZCuttableComponent"));
    this->CuttableSplineComponent = CreateDefaultSubobject<USBZCuttableSplineComponent>(TEXT("SBZCuttableSplineComponent"));
    this->CuttableSplineComponent->SetupAttachment(RootComponent);
    this->MaterialInterface = NULL;
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASBZCuttableActor::PropDamageReached() {
}

void ASBZCuttableActor::OnServerCompleteInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}


void ASBZCuttableActor::OnBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBZCuttableActor::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



