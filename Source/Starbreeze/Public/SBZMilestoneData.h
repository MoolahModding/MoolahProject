#pragma once
#include "CoreMinimal.h"
#include "SBZMilestoneData.generated.h"

USTRUCT(BlueprintType)
struct FSBZMilestoneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString MilestoneId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCompleted;
    
    STARBREEZE_API FSBZMilestoneData();
};

