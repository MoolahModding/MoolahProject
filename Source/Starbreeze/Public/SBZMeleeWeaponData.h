#pragma once
#include "CoreMinimal.h"
#include "SBZBaseWeaponData.h"
#include "SBZMeleeWeaponData.generated.h"

class USBZWeaponMeleeAttackData;

UCLASS(Blueprintable)
class USBZMeleeWeaponData : public USBZBaseWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponMeleeAttackData* MeleeAttackData;
    
    USBZMeleeWeaponData();

};

