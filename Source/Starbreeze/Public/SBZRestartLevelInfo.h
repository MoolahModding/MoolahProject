#pragma once
#include "CoreMinimal.h"
#include "SBZRestartLevelInfo.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZRestartLevelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelIdx;
    
    FSBZRestartLevelInfo();
};

