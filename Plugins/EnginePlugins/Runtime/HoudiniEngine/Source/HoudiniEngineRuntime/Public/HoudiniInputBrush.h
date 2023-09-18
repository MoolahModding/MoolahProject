#pragma once
#include "CoreMinimal.h"
#include "Engine/Brush.h"
#include "HoudiniBrushInfo.h"
#include "HoudiniInputActor.h"
#include "HoudiniInputBrush.generated.h"

class UModel;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputBrush : public UHoudiniInputActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHoudiniBrushInfo> BrushesInfo;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UModel* CombinedModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreInputObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBrushType> CachedInputBrushType;
    
public:
    UHoudiniInputBrush();

};

