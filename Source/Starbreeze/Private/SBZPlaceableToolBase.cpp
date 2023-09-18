#include "SBZPlaceableToolBase.h"

ASBZPlaceableToolBase::ASBZPlaceableToolBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DetonationTickInterval = 2.00f;
    this->DetonationRange = 500.00f;
}

void ASBZPlaceableToolBase::OnParentActorEndPlay(AActor* OldAttachParentActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


