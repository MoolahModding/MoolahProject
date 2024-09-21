#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "SBZAIFireRangedWeaponAbility.h"
#include "SBZAIFireTaserAbility.generated.h"

class ASBZPlayerCharacter;
class ASBZPlayerState;

UCLASS(Blueprintable)
class USBZAIFireTaserAbility : public USBZAIFireRangedWeaponAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* TasedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* RegisteredPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayEffectContextHandle TaserDamageContextHandle;
    
public:
    USBZAIFireTaserAbility();

};

