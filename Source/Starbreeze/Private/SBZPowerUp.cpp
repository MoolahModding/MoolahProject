#include "SBZPowerUp.h"
#include "SBZInteractableComponent.h"

ASBZPowerUp::ASBZPowerUp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->bIsDestroyedOnPickUp = false;
}

void ASBZPowerUp::SetInteractionEnabled(bool bEnabled) {
}

void ASBZPowerUp::OnServerCompleteInteraction(USBZBaseInteractableComponent* InteractableComp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

bool ASBZPowerUp::IsSeasonalItem() const {
    return false;
}


