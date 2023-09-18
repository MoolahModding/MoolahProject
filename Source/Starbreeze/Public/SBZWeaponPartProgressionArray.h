#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponPartProgression.h"
#include "SBZWeaponPartProgressionArray.generated.h"

class USBZBaseWeaponData;

USTRUCT(BlueprintType)
struct FSBZWeaponPartProgressionArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBaseWeaponData* BaseWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponPartProgression> WeaponPartProgressionArray;
    
    STARBREEZE_API FSBZWeaponPartProgressionArray();
};

