#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBZAgilityPointType.h"
#include "SBZAgilityTrajectoryPoint.generated.h"

USTRUCT(BlueprintType)
struct FSBZAgilityTrajectoryPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAgilityPointType AgilityPointType;
    
    STARBREEZE_API FSBZAgilityTrajectoryPoint();
};

