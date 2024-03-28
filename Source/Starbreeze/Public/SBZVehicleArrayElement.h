#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SBZVehicleArrayElement.generated.h"

class ASBZWheeledVehicle;

USTRUCT(BlueprintType)
struct FSBZVehicleArrayElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZWheeledVehicle> Vehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    STARBREEZE_API FSBZVehicleArrayElement();
};

