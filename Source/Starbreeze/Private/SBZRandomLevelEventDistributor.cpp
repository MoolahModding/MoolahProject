#include "SBZRandomLevelEventDistributor.h"

ASBZRandomLevelEventDistributor::ASBZRandomLevelEventDistributor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Seed = -1;
}

void ASBZRandomLevelEventDistributor::OnHackComplete(const int32 EventIndex) {
}


