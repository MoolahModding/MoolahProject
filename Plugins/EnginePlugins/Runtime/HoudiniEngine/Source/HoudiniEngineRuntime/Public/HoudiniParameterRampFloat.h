#pragma once
#include "CoreMinimal.h"
#include "HoudiniParameterMultiParm.h"
#include "HoudiniParameterRampFloat.generated.h"

class UHoudiniParameterRampFloatPoint;
class UHoudiniParameterRampModificationEvent;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniParameterRampFloat : public UHoudiniParameterMultiParm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHoudiniParameterRampFloatPoint*> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHoudiniParameterRampFloatPoint*> CachedPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> DefaultPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> DefaultValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DefaultChoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumDefaultPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCaching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHoudiniParameterRampModificationEvent*> ModificationEvents;
    
    UHoudiniParameterRampFloat();

};

