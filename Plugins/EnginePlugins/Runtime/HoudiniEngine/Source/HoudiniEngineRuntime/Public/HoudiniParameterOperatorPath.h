#pragma once
#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterOperatorPath.generated.h"

class UHoudiniInput;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniParameterOperatorPath : public UHoudiniParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHoudiniInput> HoudiniInput;
    
    UHoudiniParameterOperatorPath();

};

