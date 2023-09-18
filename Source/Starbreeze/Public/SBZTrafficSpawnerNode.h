#pragma once
#include "CoreMinimal.h"
#include "SBZTrafficRouteArray.h"
#include "SBZTrafficSpawnerNode.generated.h"

class ASBZTrafficSpline;

USTRUCT(BlueprintType)
struct FSBZTrafficSpawnerNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZTrafficSpline*> RouteArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZTrafficSpline*> DestinationArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ASBZTrafficSpline*, FSBZTrafficRouteArray> RouteArrayGraph;
    
    STARBREEZE_API FSBZTrafficSpawnerNode();
};

