#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZFireRangedWeaponAbility.generated.h"

class APawn;

UCLASS(Abstract, Blueprintable)
class USBZFireRangedWeaponAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
public:
    USBZFireRangedWeaponAbility();

};

