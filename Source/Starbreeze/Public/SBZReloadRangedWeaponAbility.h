#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZReloadRangedWeaponAbility.generated.h"

class ASBZCharacter;

UCLASS(Blueprintable)
class USBZReloadRangedWeaponAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* Character;
    
public:
    USBZReloadRangedWeaponAbility();
};

