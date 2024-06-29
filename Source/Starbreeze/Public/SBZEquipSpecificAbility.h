#pragma once
#include "CoreMinimal.h"
#include "SBZHandleEquipmentAbility.h"
#include "SBZEquipSpecificAbility.generated.h"

UCLASS(Abstract, Blueprintable)
class USBZEquipSpecificAbility : public USBZHandleEquipmentAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetEquippableIndex;
    
public:
    USBZEquipSpecificAbility();

};

