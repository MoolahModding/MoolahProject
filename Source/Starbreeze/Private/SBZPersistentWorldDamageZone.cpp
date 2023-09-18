#include "SBZPersistentWorldDamageZone.h"
#include "SBZPersistentWorldDamageZoneComponent.h"

ASBZPersistentWorldDamageZone::ASBZPersistentWorldDamageZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Zone = CreateDefaultSubobject<USBZPersistentWorldDamageZoneComponent>(TEXT("PersistentDamageZone"));
    FProperty* p_Zone_Prior = GetClass()->FindPropertyByName("Zone");
    this->RootComponent = *p_Zone_Prior->ContainerPtrToValuePtr<USBZPersistentWorldDamageZoneComponent*>(this);
}


