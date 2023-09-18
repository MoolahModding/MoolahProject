#include "SBZThermite.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"

ASBZThermite::ASBZThermite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BagOverlapBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->IgnitionInteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->BurnDuration = 360.00f;
    this->ExplosionChance = 0.50f;
    this->TimeBetweenExplosionChecks = 10.00f;
    this->bShouldDestroyOnComplete = true;
    this->bStartEnabled = true;
    this->ElapsedBurnTime = 0.00f;
    this->CurrentBurnState = ESBZThermiteBurnState::Inactive;
    this->CriticalBurnTimeLeft = 0.00f;
    this->Seed = -1;
    this->bIsInterfered = false;
    this->BurnModifier = 1.00f;
    this->TimeSinceLastExplosionCheck = 0.00f;
    this->InitialSeed = -1;
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
    this->RootComponent = BagOverlapBoxComponent;
}

void ASBZThermite::SetOutsideInterferenceActive(const bool bInActive) {
}

void ASBZThermite::SetBagOverlapBoxEnabled(bool bInEnabled) {
}

void ASBZThermite::OnRep_Seed() {
}

void ASBZThermite::OnRep_IsInterfered() {
}

void ASBZThermite::OnRep_CurrentState(ESBZThermiteBurnState OldState) {
}

void ASBZThermite::OnBoxComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZThermite::OnAckCompleteIgnition(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZThermite::Multicast_ThermiteBagOverlapped_Implementation(bool bIsInitialBag) {
}

void ASBZThermite::Multicast_SetState_Implementation(ESBZThermiteBurnState NewState) {
}

void ASBZThermite::Multicast_SetOutsideInterference_Implementation(const bool bInIsActive) {
}






void ASBZThermite::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZThermite, ElapsedBurnTime);
    DOREPLIFETIME(ASBZThermite, CurrentBurnState);
    DOREPLIFETIME(ASBZThermite, CriticalBurnTimeLeft);
    DOREPLIFETIME(ASBZThermite, Seed);
    DOREPLIFETIME(ASBZThermite, bIsInterfered);
    DOREPLIFETIME(ASBZThermite, TimeSinceLastExplosionCheck);
}


