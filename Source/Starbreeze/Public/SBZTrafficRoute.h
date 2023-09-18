#pragma once
#include "CoreMinimal.h"
#include "SBZTrafficRoute.generated.h"

class ASBZTrafficSpline;

USTRUCT(BlueprintType)
struct FSBZTrafficRoute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VehicleTypeFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZTrafficSpline*> Path;
    
    STARBREEZE_API FSBZTrafficRoute();
};

