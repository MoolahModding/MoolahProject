#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Brush.h"
#include "HoudiniBrushInfo.generated.h"

class ABrush;

USTRUCT(BlueprintType)
struct FHoudiniBrushInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ABrush> BrushActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CachedTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CachedOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CachedExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBrushType> CachedBrushType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 CachedSurfaceHash;
    
    HOUDINIENGINERUNTIME_API FHoudiniBrushInfo();
};

