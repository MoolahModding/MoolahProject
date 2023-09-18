#include "SBZHackingTool.h"

ASBZHackingTool::ASBZHackingTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentHackable = NULL;
    this->LockedInHackable = NULL;
    this->ExplosionInstigator = NULL;
    this->HackingToolEMPEffectClass = NULL;
    this->HackingToolEMPEffectClass = NULL;
    this->HackingToolEMPExplodedEvent = NULL;
    this->EMPDetonationEffect = NULL;
    this->EMPStunDuration = 10.00f;
    this->AIExplosionRange = 500.00f;
    this->PlayerExplosionRange = 300.00f;
    this->bExplosionAffectsAIOnly = true;
    this->EMPDetonationRange = 500.00f;
    this->HackingSyncStartedEvent = NULL;
    this->HackingSyncAbortedEvent = NULL;
    this->HackingSyncCompletedEvent = NULL;
    this->HackingSyncSucceededEvent = NULL;
    this->OnHackingSyncStartedEventRtpc = NULL;
    this->OnHackingSyncAbortedEventRtpc = NULL;
    this->OnHackingSyncCompletedEventRtpc = NULL;
    this->OnHackingSyncSucceededEventRtpc = NULL;
}





void ASBZHackingTool::Multicast_SetCurrentHackable_Implementation(AActor* InHackedDevice) {
}

void ASBZHackingTool::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}


