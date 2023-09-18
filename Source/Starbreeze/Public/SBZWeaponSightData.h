#pragma once
#include "CoreMinimal.h"
#include "SBZEquippablePartCustomData.h"
#include "SBZWeaponSightData.generated.h"

class USBZWeaponDOFData;
class USBZWeaponTargetingData;

UCLASS(Blueprintable, MinimalAPI)
class USBZWeaponSightData : public USBZEquippablePartCustomData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponTargetingData* TargetingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponDOFData* DOFData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    USBZWeaponSightData();

};

