#pragma once
#include "CoreMinimal.h"
#include "SBZSelectedMissionInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZSelectedMissionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LevelSchematicIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DifficultyIdx;
    
    STARBREEZE_API FSBZSelectedMissionInfo();
};

