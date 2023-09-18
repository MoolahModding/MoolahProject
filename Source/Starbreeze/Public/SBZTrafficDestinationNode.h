#pragma once
#include "CoreMinimal.h"
#include "SBZTrafficRouteArray.h"
#include "SBZTrafficDestinationNode.generated.h"

class ASBZTrafficSpline;

USTRUCT(BlueprintType)
struct FSBZTrafficDestinationNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOccupied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZTrafficSpline*> SpawnerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ASBZTrafficSpline*, FSBZTrafficRouteArray> RouteArrayGraph;
    
    STARBREEZE_API FSBZTrafficDestinationNode();
};

