#pragma once
#include "CoreMinimal.h"
#include "ESBZReloadState.h"
#include "SBZCombinedReloadState.generated.h"

USTRUCT(BlueprintType)
struct FSBZCombinedReloadState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZReloadState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEmptyCycleNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCycleNeeded;
    
    STARBREEZE_API FSBZCombinedReloadState();
};

