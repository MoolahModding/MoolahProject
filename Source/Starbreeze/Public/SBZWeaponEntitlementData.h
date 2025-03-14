#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZEquippableLoadoutSlot.h"
#include "SBZWeaponEntitlementData.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponEntitlementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid ConfigSlotEntitlementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZEquippableLoadoutSlot EquippableLoadoutSlot;
    
    STARBREEZE_API FSBZWeaponEntitlementData();
};

