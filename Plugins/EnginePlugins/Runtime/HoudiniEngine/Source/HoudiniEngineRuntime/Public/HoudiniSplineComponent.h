#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "EHoudiniCurveMethod.h"
#include "EHoudiniCurveType.h"
#include "HoudiniEngineCopyPropertiesInterface.h"
#include "HoudiniSplineComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniSplineComponent : public USceneComponent, public IHoudiniEngineCopyPropertiesInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> CurvePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> DisplayPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DisplayPointIndexDivider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HoudiniSplineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHoudiniSplineVisible;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoudiniCurveType CurveType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoudiniCurveMethod CurveMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOutputCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCookOnCurveChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasChanged;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNeedsToTriggerUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInputCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEditableOutputCurve;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NodeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PartName;
    
public:
    UHoudiniSplineComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

