#include "SBZEnvQueryGenerator_CoverPoints.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

USBZEnvQueryGenerator_CoverPoints::USBZEnvQueryGenerator_CoverPoints() {
    this->SearchCenter = UEnvQueryContext_Querier::StaticClass();
    this->bUseContextAsGenerator = false;
    this->bSortByDistance = true;
    this->SortCenter = NULL;
    this->SortCenter = NULL;
    this->TargetContext = NULL;
    this->TargetContext = NULL;
    this->NrAdditionalRandomDistCovers = 0;
    this->MaxDotToTarget = 0.50f;
    this->bShouldLimitToAdjacentRooms = false;
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
}


