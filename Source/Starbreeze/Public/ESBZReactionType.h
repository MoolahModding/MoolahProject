#pragma once
#include "CoreMinimal.h"
#include "ESBZReactionType.generated.h"

UENUM(BlueprintType)
enum class ESBZReactionType : uint8 {
    PlaceMedicBag,
    PlaceAmmoBag,
    PlaceArmorBag,
    PlaceSentryTurret,
    PlaceMicroCamera,
    PlaceECMJammer,
    PlaceSensorTool,
    PlaceTripMine,
    PlayerDowned,
    PlayerRevived,
    PlayerFlashed,
    PlayerGassed,
    PlayerTased,
    PlayerTasedMine,
    PlayerTasedBattery,
    SWATSurrenders,
    HostageTraded,
    HumanShield,
    PlayerCuffedByCloaker,
    PlayerUsingOverkillWeapon,
    ECMJammerActive,
    HeisterChainsIdle,
    HeisterDallasIdle,
    HeisterHoxtonIdle,
    HeisterJoyIdle,
    HeisterPearlIdle,
    HeisterWolfIdle,
    HeisterUnkownIdle,
    MAX,
};

