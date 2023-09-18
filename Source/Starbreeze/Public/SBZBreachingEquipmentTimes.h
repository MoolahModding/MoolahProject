#pragma once
#include "CoreMinimal.h"
#include "SBZBreachingEquipmentTimes.generated.h"

USTRUCT(BlueprintType)
struct FSBZBreachingEquipmentTimes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RedZoneTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YellowZoneTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GreenZoneTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalFuelTime;
    
    STARBREEZE_API FSBZBreachingEquipmentTimes();
};

