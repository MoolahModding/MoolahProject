#pragma once
#include "CoreMinimal.h"
#include "SBZEquippableEndMissionResultData.generated.h"

USTRUCT(BlueprintType)
struct FSBZEquippableEndMissionResultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 UseCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 UseSuccessCount;
    
    STARBREEZE_API FSBZEquippableEndMissionResultData();
};

