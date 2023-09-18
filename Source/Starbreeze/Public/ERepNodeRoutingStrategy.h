#pragma once
#include "CoreMinimal.h"
#include "ERepNodeRoutingStrategy.generated.h"

UENUM()
enum class ERepNodeRoutingStrategy : uint32 {
    NotRouted,
    DependentActor,
    RelevantAllConnections,
    Spatialize_Static,
    Spatialize_Dynamic,
    Spatialize_Dormancy,
    Spatialize_Dynamic_Frequency,
    PrototypingOnly,
};

