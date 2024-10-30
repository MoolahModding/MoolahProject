#pragma once
#include "CoreMinimal.h"
#include "SBZDamageDistance.h"
#include "SBZFragGrenadeData.h"
#include "SBZPlayerFragGrenadeData.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZPlayerFragGrenadeData : public USBZFragGrenadeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZDamageDistance> DamageDistanceArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorPenetration;
    
    USBZPlayerFragGrenadeData();

};

