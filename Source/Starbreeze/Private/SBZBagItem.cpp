#include "SBZBagItem.h"
#include "AkComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZBagBoxComponent.h"
#include "SBZInteractableComponent.h"
#include "SBZSimplePhysicsCorrector.h"
#include "SBZZiplineAudioController.h"

ASBZBagItem::ASBZBagItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USBZBagBoxComponent>(TEXT("BoxComponent"));
    this->Tags.AddDefaulted(3);
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->ZiplineAudioController = CreateDefaultSubobject<USBZZiplineAudioController>(TEXT("SBZZiplineAudioController"));
    this->OverrideImpactEvent = NULL;
    this->MinimumImpactVelocity = 5.00f;
    this->ZiplineMotorClass = NULL;
    this->CurrentZiplineMotor = NULL;
    this->BoxComponent = (USBZBagBoxComponent*)RootComponent;
    this->Interactable = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("PickupInteract"));
    this->PhysicsCorrector = CreateDefaultSubobject<USBZSimplePhysicsCorrector>(TEXT("SimplePhysicsCorrector"));
    this->CurrentZipLine = NULL;
    this->TimeOnZipline = 0.00f;
    this->bIsMovingOnZiplineForward = false;
    this->BagId = -1;
    this->InteractionDelay = 0.30f;
    this->ZiplineParams = NULL;
    this->bCanCrewAICarry = true;
    this->bShouldBroadcastOnHitEvent = false;
    this->MarkerID = -1;
    this->AudioComponent->SetupAttachment(RootComponent);
}

bool ASBZBagItem::SecureBag(bool bDestroyOnSecured) {
    return false;
}

void ASBZBagItem::OnRep_CurrentZipline() {
}

void ASBZBagItem::OnRep_BagId() {
}

void ASBZBagItem::OnPickup(USBZBaseInteractableComponent* NewInteractable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZBagItem::Multicast_SetZipline_Implementation(ASBZZipline* Zipline, const float InTimeOnZipline, const bool bInIsMovingForward) {
}



void ASBZBagItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZBagItem, CurrentZipLine);
    DOREPLIFETIME(ASBZBagItem, TimeOnZipline);
    DOREPLIFETIME(ASBZBagItem, bIsMovingOnZiplineForward);
    DOREPLIFETIME(ASBZBagItem, BagId);
}


