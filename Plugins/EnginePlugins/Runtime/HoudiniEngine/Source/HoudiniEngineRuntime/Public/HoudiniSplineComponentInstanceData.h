#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ComponentInstanceDataCache.h"
#include "HoudiniSplineComponentInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FHoudiniSplineComponentInstanceData : public FActorComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> CurvePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> DisplayPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DisplayPointIndexDivider;
    
    HOUDINIENGINERUNTIME_API FHoudiniSplineComponentInstanceData();
};

