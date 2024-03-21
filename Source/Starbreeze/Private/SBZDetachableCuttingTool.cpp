#include "SBZDetachableCuttingTool.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"

void ASBZDetachableCuttingTool::Multicast_SetArmed_Implementation() {
}

void ASBZDetachableCuttingTool::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}

ASBZDetachableCuttingTool::ASBZDetachableCuttingTool() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->ExplosionInstigator = NULL;
    this->DetachableCuttingToolEffectClass = NULL;
    this->DetachableCuttingToolExplodedEvent = NULL;
    this->DetonationEffect = NULL;
    this->AIExplosionRange = 500.00f;
    this->PlayerExplosionRange = 300.00f;
    this->bExplosionAffectsAIOnly = true;
    this->AdditionalPlayerRange = 0.00f;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->LocalplayerFeedback = NULL;
}

