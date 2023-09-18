#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponGunKickBackData.h"
#include "SBZWeaponViewKickBackData.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponViewKickBackData : public FSBZWeaponGunKickBackData {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZWeaponViewKickBackData();
};

