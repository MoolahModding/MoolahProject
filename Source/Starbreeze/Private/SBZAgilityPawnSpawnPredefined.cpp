#include "SBZAgilityPawnSpawnPredefined.h"
#include "SBZNavLinkAgilityComponent.h"

void ASBZAgilityPawnSpawnPredefined::UpdateAgilityTrajectory() {
}

void ASBZAgilityPawnSpawnPredefined::SpawnedPawnOrderPushed(ASBZAIController* Controller, USBZAIOrder* Order) {
}

ASBZAgilityPawnSpawnPredefined::ASBZAgilityPawnSpawnPredefined() {
    this->ForcedMontage = NULL;
    this->bUseAnimationToComputeEnd = false;
    this->AgilityType = ESBZAgilityType::ExitFromCarSide;
    this->NavLinkAgilityComponent = CreateDefaultSubobject<USBZNavLinkAgilityComponent>(TEXT("SBZNavLinkAgilityComponent"));
}

