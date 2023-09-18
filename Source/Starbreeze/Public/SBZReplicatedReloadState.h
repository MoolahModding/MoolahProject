#pragma once
#include "CoreMinimal.h"
#include "SBZCombinedReloadState.h"
#include "SBZReplicatedReloadState.generated.h"

USTRUCT(BlueprintType)
struct FSBZReplicatedReloadState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZCombinedReloadState Array[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPlayingCycleNeeded;
    
    STARBREEZE_API FSBZReplicatedReloadState();
};

