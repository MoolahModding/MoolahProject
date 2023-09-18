#include "SBZGameModeBase.h"
#include "SBZGameSessionBase.h"

ASBZGameModeBase::ASBZGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameSessionClass = ASBZGameSessionBase::StaticClass();
    this->bUseSeamlessTravel = true;
}


