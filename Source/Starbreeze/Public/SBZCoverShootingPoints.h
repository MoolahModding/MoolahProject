#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZShootingPointType.h"
#include "SBZCoverShootingPoints.generated.h"

USTRUCT(BlueprintType)
struct FSBZCoverShootingPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLineTraceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZShootingPointType ShootingType;
    
    STARBREEZE_API FSBZCoverShootingPoints();
};

