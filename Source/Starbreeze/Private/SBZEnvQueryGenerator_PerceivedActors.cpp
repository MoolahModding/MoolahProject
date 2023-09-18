#include "SBZEnvQueryGenerator_PerceivedActors.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

USBZEnvQueryGenerator_PerceivedActors::USBZEnvQueryGenerator_PerceivedActors() {
    this->PerceiverContext = UEnvQueryContext_Querier::StaticClass();
    this->bHostilesOnly = true;
    this->bOnlyVisualGenerators = false;
    this->bCurrentlySensed = true;
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
}


