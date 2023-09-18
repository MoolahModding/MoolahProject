#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
#include "HoudiniInputHoudiniAsset.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputHoudiniAsset : public UHoudiniInputObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssetOutputIndex;
    
    UHoudiniInputHoudiniAsset();

};

