#pragma once
#include "CoreMinimal.h"
#include "SBZVehicleArrayElement.generated.h"

class UClass;

USTRUCT(BlueprintType)
struct FSBZVehicleArrayElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* Vehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    STARBREEZE_API FSBZVehicleArrayElement();
};

