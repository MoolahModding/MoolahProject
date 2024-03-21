#pragma once
#include "CoreMinimal.h"
#include "SBZHandleEquipmentAbility.h"
#include "SBZEquipNextAbility.generated.h"

UCLASS(Blueprintable)
class USBZEquipNextAbility : public USBZHandleEquipmentAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNextForward;
    
public:
    USBZEquipNextAbility();
};

