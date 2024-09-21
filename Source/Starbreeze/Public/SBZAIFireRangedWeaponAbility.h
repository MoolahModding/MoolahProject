#pragma once
#include "CoreMinimal.h"
#include "SBZFireRangedWeaponAbility.h"
#include "SBZAIFireRangedWeaponAbility.generated.h"

UCLASS(Blueprintable)
class USBZAIFireRangedWeaponAbility : public USBZFireRangedWeaponAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<bool> BurstPattern;
    
public:
    USBZAIFireRangedWeaponAbility();

};

