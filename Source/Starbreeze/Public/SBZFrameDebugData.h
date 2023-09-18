#pragma once
#include "CoreMinimal.h"
#include "SBZStageDebugData.h"
#include "SBZFrameDebugData.generated.h"

USTRUCT(BlueprintType)
struct FSBZFrameDebugData : public FSBZStageDebugData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaTime;
    
    STARBREEZE_API FSBZFrameDebugData();
};

