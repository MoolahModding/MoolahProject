#include "SBZAgilityPawnSpawnPredefined.h"
#include "SBZNavLinkAgilityComponent.h"

ASBZAgilityPawnSpawnPredefined::ASBZAgilityPawnSpawnPredefined(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOverrideSpawningMethod = true;
    this->ForcedMontage = NULL;
    this->bUseAnimationToComputeEnd = false;
    this->AgilityType = ESBZAgilityType::ExitFromCarSide;
    this->NavLinkAgilityComponent = CreateDefaultSubobject<USBZNavLinkAgilityComponent>(TEXT("SBZNavLinkAgilityComponent"));
}

void ASBZAgilityPawnSpawnPredefined::UpdateAgilityTrajectory() {
}

void ASBZAgilityPawnSpawnPredefined::SpawnedPawnOrderPushed(ASBZAIController* Controller, USBZAIOrder* Order) {
}


