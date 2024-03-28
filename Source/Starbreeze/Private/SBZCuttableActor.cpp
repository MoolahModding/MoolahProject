#include "SBZCuttableActor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"
#include "SBZCuttableComponent.h"
#include "SBZCuttableSplineComponent.h"
#include "SBZInteractableComponent.h"

void ASBZCuttableActor::PropDamageReached() {
}

void ASBZCuttableActor::OnServerCompleteInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}


void ASBZCuttableActor::OnBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBZCuttableActor::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


ASBZCuttableActor::ASBZCuttableActor() {
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
}

