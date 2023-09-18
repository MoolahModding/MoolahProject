#pragma once
#include "CoreMinimal.h"
#include "EHoudiniCurveMethod.h"
#include "EHoudiniCurveType.h"
#include "HoudiniInputObject.h"
#include "HoudiniInputHoudiniSplineComponent.generated.h"

class UHoudiniSplineComponent;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputHoudiniSplineComponent : public UHoudiniInputObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoudiniCurveType CurveType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoudiniCurveMethod CurveMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Reversed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHoudiniSplineComponent* CachedComponent;
    
public:
    UHoudiniInputHoudiniSplineComponent();

};

