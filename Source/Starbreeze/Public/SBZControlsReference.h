#pragma once
#include "CoreMinimal.h"
#include "SBZActionControlReference.h"
#include "SBZControlsReference.generated.h"

USTRUCT(BlueprintType)
struct FSBZControlsReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZActionControlReference> ActionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    STARBREEZE_API FSBZControlsReference();
};

