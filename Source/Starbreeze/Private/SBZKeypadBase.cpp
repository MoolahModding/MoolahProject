#include "SBZKeypadBase.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "Net/UnrealNetwork.h"

ASBZKeypadBase::ASBZKeypadBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GuessedCode = 0;
    this->Inputs = 0;
    this->KeypadInteractableComponentArray.AddDefaulted(12);
    this->BaseKeypadMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseKeypadMesh"));
    this->CodeWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("CodeWidget"));
    this->LanternCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LanternCapsule"));
    this->bIsInteractable = false;
    this->IncorrectCodeWaitTime = 20.00f;
    this->ButtonSoundEvent = NULL;
    this->Code = 0;
    this->Seed = -1;
    this->bRandomizeOnBeginPlay = true;
    this->bHasRandomized = false;
    this->BaseKeypadMesh->SetupAttachment(RootComponent);
    this->CodeWidget->SetupAttachment(BaseKeypadMesh);
    this->LanternCapsule->SetupAttachment(RootComponent);
}

void ASBZKeypadBase::StartRandomization() {
}

void ASBZKeypadBase::SetInteractionEnabled(bool bEnabled) {
}

void ASBZKeypadBase::OnRep_IsInteractable() {
}

void ASBZKeypadBase::OnRep_HasRandomized() {
}

void ASBZKeypadBase::OnRep_GuessedCode() {
}

void ASBZKeypadBase::OnLanternCapsuleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBZKeypadBase::OnLanternCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZKeypadBase::OnKeypadPressed(USBZBaseInteractableComponent* InteractableComp, USBZInteractorComponent* Interactor, bool bIsLocallyControlled) {
}

void ASBZKeypadBase::OnFocusChanged(const USBZBaseInteractableComponent* InteractableComp, bool bInNewState) {
}

void ASBZKeypadBase::Multicast_StartRandomization_Implementation() {
}







void ASBZKeypadBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZKeypadBase, GuessedCode);
    DOREPLIFETIME(ASBZKeypadBase, Inputs);
    DOREPLIFETIME(ASBZKeypadBase, bIsInteractable);
    DOREPLIFETIME(ASBZKeypadBase, bHasRandomized);
}


