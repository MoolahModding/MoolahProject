#include "SBZEnvQueryTest_RoomPathfinding.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

USBZEnvQueryTest_RoomPathfinding::USBZEnvQueryTest_RoomPathfinding() {
    this->Detail = ESBZEnvTestPathfindingDetail::Rough;
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->RoomContext = NULL;
    this->RoomContext = NULL;
    this->bIsLockedExpensive = false;
}


