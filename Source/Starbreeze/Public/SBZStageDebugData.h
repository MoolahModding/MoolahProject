#pragma once
#include "CoreMinimal.h"
#include "SBZStageMiscDebugData.h"
#include "SBZVariableValue.h"
#include "SBZStageDebugData.generated.h"

USTRUCT(BlueprintType)
struct FSBZStageDebugData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZStageMiscDebugData> MiscDebugData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZVariableValue> InputVariableValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZVariableValue> OutputVariableValues;
    
    STARBREEZE_API FSBZStageDebugData();
};

