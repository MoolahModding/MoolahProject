#pragma once
#include "CoreMinimal.h"
#include "ESBZReplayEvent.h"
#include "SBZReplayEventInfo.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZReplayEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZReplayEvent EventGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Percent;
    
    FSBZReplayEventInfo();
};

