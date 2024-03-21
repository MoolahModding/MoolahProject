#include "SBZPersistentWorldDamageZone.h"
#include "SBZPersistentWorldDamageZoneComponent.h"

ASBZPersistentWorldDamageZone::ASBZPersistentWorldDamageZone() {
    this->Zone = CreateDefaultSubobject<USBZPersistentWorldDamageZoneComponent>(TEXT("PersistentDamageZone"));
}

