#include "SBZKeypad.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "Net/UnrealNetwork.h"

ASBZKeypad::ASBZKeypad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GuessedCode = 0;
    this->Inputs = 0;
    this->KeypadInteractableComponentArray.AddDefaulted(12);
    this->BaseKeypadMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseKeypadMesh"));
    this->BaseKeypadMesh->SetupAttachment(RootComponent);
    this->CodeWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("CodeWidget"));
    this->CodeWidget->SetupAttachment(BaseKeypadMesh);
    this->LanternCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LanternCapsule"));
    this->LanternCapsule->SetupAttachment(RootComponent);
    this->bIsInteractable = false;
    this->bHasHighlights = false;
    this->bRandomizeAtBeginPlay = false;
    this->IncorrectCodeWaitTime = 20.00f;
    this->ButtonSoundEvent = NULL;
    this->Code = 3;
    this->Seed = -1;
}

void ASBZKeypad::SetInteractionEnabled(bool bEnabled) {
}

void ASBZKeypad::RandomizeCode() {
}

void ASBZKeypad::OnRep_IsInteractable() {
}

void ASBZKeypad::OnRep_GuessedCode() {
}

void ASBZKeypad::OnLanternCapsuleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBZKeypad::OnLanternCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZKeypad::OnKeypadPressed(USBZBaseInteractableComponent* InteractableComp, USBZInteractorComponent* Interactor, bool bIsLocallyControlled) {
}

void ASBZKeypad::OnInteractionStateChanged(const USBZBaseInteractableComponent* InteractableComponent, bool bInNewState) {
}

void ASBZKeypad::OnFocusChanged(const USBZBaseInteractableComponent* InteractableComp, bool bInNewState) {
}

void ASBZKeypad::HandleOnInteractKeypadE() {
}

void ASBZKeypad::HandleOnInteractKeypadC() {
}







void ASBZKeypad::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZKeypad, GuessedCode);
    DOREPLIFETIME(ASBZKeypad, Inputs);
    DOREPLIFETIME(ASBZKeypad, bIsInteractable);
    DOREPLIFETIME(ASBZKeypad, bHasHighlights);
}


