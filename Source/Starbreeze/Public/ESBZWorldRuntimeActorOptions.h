#pragma once
#include "CoreMinimal.h"
#include "ESBZWorldRuntimeActorOptions.generated.h"

UENUM(BlueprintType)
enum class ESBZWorldRuntimeActorOptions : uint8 {
    AllPlayerCharacters,
    AllAlivePlayerCharacters,
    AllAliveAICharacters,
    AllDespawnVolumes,
    AllDefensePoints,
    AllRoomVolumes,
    AllEscortPoints,
    AllBagDropPoints,
    AllAIObjectives,
    AllVantagePoints,
    AllSabotageTargets,
    AllSecurityCameras,
    AllProtectPoints,
    AllArmedGrenades,
    AllHostages,
    MAX,
};

