#include "SBZEnvQueryGenerator_WorldRuntimeActors.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

USBZEnvQueryGenerator_WorldRuntimeActors::USBZEnvQueryGenerator_WorldRuntimeActors() {
    this->ActorSetting = 0;
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
}


