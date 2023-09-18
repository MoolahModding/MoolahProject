#pragma once
#include "CoreMinimal.h"
#include "SBZControlsReference.h"
#include "SBZControlsReferenceRuntime.generated.h"

USTRUCT(BlueprintType)
struct FSBZControlsReferenceRuntime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZControlsReference ControlsReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    STARBREEZE_API FSBZControlsReferenceRuntime();
};

