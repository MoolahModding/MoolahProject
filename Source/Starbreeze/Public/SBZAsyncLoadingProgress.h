#pragma once
#include "CoreMinimal.h"
#include "SBZGameEventStructBase.h"
#include "SBZAsyncLoadingProgress.generated.h"

USTRUCT(BlueprintType)
struct FSBZAsyncLoadingProgress : public FSBZGameEventStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
    STARBREEZE_API FSBZAsyncLoadingProgress();
};

