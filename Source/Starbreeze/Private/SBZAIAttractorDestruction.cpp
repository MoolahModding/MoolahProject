#include "SBZAIAttractorDestruction.h"
#include "Components/SceneComponent.h"
#include "SBZAIAttractorComponent.h"
#include "SBZPropDamageComponent.h"

ASBZAIAttractorDestruction::ASBZAIAttractorDestruction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->PropDamage = CreateDefaultSubobject<USBZPropDamageComponent>(TEXT("SBZPropDamageComponent"));
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
    this->bIsAirNavOnDestruction = false;
}

void ASBZAIAttractorDestruction::OnPropDamageHits(UActorComponent* PoolComponent, int32 Hits, bool bDoCosmetics, const FSBZPropDamageContext& DamageContext) {
}

void ASBZAIAttractorDestruction::OnPropDamageHealth(UActorComponent* PoolComponent, float Health, bool bDoCosmetics, const FSBZPropDamageContext& DamageContext) {
}

void ASBZAIAttractorDestruction::Multicast_BreakDestructionAttractor_Implementation() {
}

void ASBZAIAttractorDestruction::BreakDestructionAttractor() {
}


