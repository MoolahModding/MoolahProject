#pragma once
#include "CoreMinimal.h"
#include "SBZTrafficRoute.h"
#include "SBZTrafficRouteArray.generated.h"

USTRUCT(BlueprintType)
struct FSBZTrafficRouteArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZTrafficRoute> RouteArray;
    
    STARBREEZE_API FSBZTrafficRouteArray();
};

