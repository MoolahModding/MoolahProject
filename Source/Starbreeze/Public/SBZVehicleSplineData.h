#pragma once
#include "CoreMinimal.h"
#include "SBZVehicleSplineData.generated.h"

class ASBZSpline;

USTRUCT(BlueprintType)
struct FSBZVehicleSplineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASBZSpline> EnterSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASBZSpline> ExitSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartsEnabled;
    
    STARBREEZE_API FSBZVehicleSplineData();
};

