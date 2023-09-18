#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HoudiniHandleParameter.generated.h"

class UHoudiniParameter;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniHandleParameter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHoudiniParameter* AssetParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TupleIndex;
    
    UHoudiniHandleParameter();

};

