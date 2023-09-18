#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZAgilityPointType.h"
#include "ESBZAgilitySegmentAxis.h"
#include "SBZAgilityAnimationQueryFilter.generated.h"

USTRUCT(BlueprintType)
struct FSBZAgilityAnimationQueryFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAgilityPointType StartAgilityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAgilityPointType EndAgilityType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval DistanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAgilitySegmentAxis DistanceRangeAxis;
    
    STARBREEZE_API FSBZAgilityAnimationQueryFilter();
};

