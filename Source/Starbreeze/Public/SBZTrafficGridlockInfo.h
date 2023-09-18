#pragma once
#include "CoreMinimal.h"
#include "SBZTrafficGridlockInfo.generated.h"

class ASBZWheeledVehicle;

USTRUCT(BlueprintType)
struct FSBZTrafficGridlockInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZWheeledVehicle*> VehicleArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridlockBreakTimer;
    
    STARBREEZE_API FSBZTrafficGridlockInfo();
};

