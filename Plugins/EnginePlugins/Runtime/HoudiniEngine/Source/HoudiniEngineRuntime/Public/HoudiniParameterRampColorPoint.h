#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EHoudiniRampInterpolationType.h"
#include "HoudiniParameterRampColorPoint.generated.h"

class UHoudiniParameterChoice;
class UHoudiniParameterColor;
class UHoudiniParameterFloat;

UCLASS(Blueprintable, DefaultToInstanced)
class HOUDINIENGINERUNTIME_API UHoudiniParameterRampColorPoint : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoudiniRampInterpolationType Interpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHoudiniParameterFloat* PositionParentParm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHoudiniParameterColor* ValueParentParm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHoudiniParameterChoice* InterpolationParentParm;
    
    UHoudiniParameterRampColorPoint();

};

