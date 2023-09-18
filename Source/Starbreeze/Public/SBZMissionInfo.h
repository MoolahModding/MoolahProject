#pragma once
#include "CoreMinimal.h"
#include "SBZMissionInfo.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZMissionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DifficultyIdx;
    
    FSBZMissionInfo();
};

