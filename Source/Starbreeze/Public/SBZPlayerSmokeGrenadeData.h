#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerGasGrenadeData.h"
#include "SBZPlayerSmokeGrenadeData.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZPlayerSmokeGrenadeData : public USBZPlayerGasGrenadeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeMultiplierIncrease;
    
    USBZPlayerSmokeGrenadeData();

};

