#pragma once
#include "CoreMinimal.h"
#include "ESBZReloadState.generated.h"

UENUM(BlueprintType)
enum class ESBZReloadState : uint8 {
    None,
    StartCycle,
    RemoveMagazine,
    RemoveMagazineCycle,
    InsertMagazine,
    InsertMagazineCycle,
    InsertAmmo,
    InsertAmmoLast,
    InsertAmmoEnd,
    InsertAmmoCycle1,
    InsertAmmoCycle2,
    EndCycle,
    MAX,
};

