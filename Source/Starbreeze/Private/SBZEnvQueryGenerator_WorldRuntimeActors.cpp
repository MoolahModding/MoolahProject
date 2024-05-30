#include "SBZEnvQueryGenerator_WorldRuntimeActors.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

USBZEnvQueryGenerator_WorldRuntimeActors::USBZEnvQueryGenerator_WorldRuntimeActors() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->ActorSetting = 0;
}


