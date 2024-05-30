#include "SBZAIRefractorShield.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Net/UnrealNetwork.h"
#include "SBZPropDamageComponent.h"

ASBZAIRefractorShield::ASBZAIRefractorShield(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("SkeletalMesh"));
    this->SkeletalMesh = (USkeletalMeshComponentBudgeted*)RootComponent;
    this->PropDamageComponent = CreateDefaultSubobject<USBZPropDamageComponent>(TEXT("SBZPropDamageComponent"));
    this->DestroyedEffect = NULL;
    this->DestroyedEvent = NULL;
    this->DeployAnimation = NULL;
    this->RetractAnimation = NULL;
    this->bHasDeployed = false;
}

void ASBZAIRefractorShield::OnRep_HasDeployed() {
}

void ASBZAIRefractorShield::OnPropDamaged(UActorComponent* PoolComponent, float Health, bool bDoCosmetics, const FSBZPropDamageContext& DamageContext) {
}

void ASBZAIRefractorShield::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZAIRefractorShield, bHasDeployed);
}


