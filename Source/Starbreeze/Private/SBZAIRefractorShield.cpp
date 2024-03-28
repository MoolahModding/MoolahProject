#include "SBZAIRefractorShield.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Net/UnrealNetwork.h"
#include "SBZPropDamageComponent.h"

void ASBZAIRefractorShield::OnRep_HasDeployed() {
}

void ASBZAIRefractorShield::OnPropDamaged(UActorComponent* PoolComponent, float Health, bool bDoCosmetics, const FSBZPropDamageContext& DamageContext) {
}

void ASBZAIRefractorShield::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZAIRefractorShield, bHasDeployed);
}

ASBZAIRefractorShield::ASBZAIRefractorShield() {
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("SkeletalMesh"));
    this->PropDamageComponent = CreateDefaultSubobject<USBZPropDamageComponent>(TEXT("SBZPropDamageComponent"));
    this->DestroyedEffect = NULL;
    this->DestroyedEvent = NULL;
    this->DeployAnimation = NULL;
    this->RetractAnimation = NULL;
    this->bHasDeployed = false;
}

