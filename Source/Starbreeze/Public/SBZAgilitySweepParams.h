#pragma once
#include "CoreMinimal.h"
#include "SBZAgilitySweepParams.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FSBZAgilitySweepParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    STARBREEZE_API FSBZAgilitySweepParams();
};

