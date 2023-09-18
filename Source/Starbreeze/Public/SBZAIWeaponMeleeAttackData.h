#pragma once
#include "CoreMinimal.h"
#include "ESBZDifficulty.h"
#include "SBZWeaponMeleeAttackData.h"
#include "SBZAIWeaponMeleeAttackData.generated.h"

UCLASS(Blueprintable)
class USBZAIWeaponMeleeAttackData : public USBZWeaponMeleeAttackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, float> Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorPenetration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageInterval[4];
    
    USBZAIWeaponMeleeAttackData();

};

