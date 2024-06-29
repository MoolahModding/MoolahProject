#include "SBZPersistentWorldDamageZone.h"
#include "SBZPersistentWorldDamageZoneComponent.h"

ASBZPersistentWorldDamageZone::ASBZPersistentWorldDamageZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USBZPersistentWorldDamageZoneComponent>(TEXT("PersistentDamageZone"));
    this->Zone = (USBZPersistentWorldDamageZoneComponent*)RootComponent;
}


