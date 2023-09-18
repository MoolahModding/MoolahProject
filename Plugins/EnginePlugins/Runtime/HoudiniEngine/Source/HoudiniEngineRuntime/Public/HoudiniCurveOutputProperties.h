#pragma once
#include "CoreMinimal.h"
#include "EHoudiniCurveMethod.h"
#include "EHoudiniCurveOutputType.h"
#include "EHoudiniCurveType.h"
#include "HoudiniCurveOutputProperties.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniCurveOutputProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoudiniCurveOutputType CurveOutputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClosed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoudiniCurveType CurveType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoudiniCurveMethod CurveMethod;
    
    FHoudiniCurveOutputProperties();
};

