#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeDailySlot.h"
#include "SBZChallengeDailyBlock.generated.h"

USTRUCT(BlueprintType)
struct FSBZChallengeDailyBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZChallengeDailySlot> SlotArray;
    
    STARBREEZE_API FSBZChallengeDailyBlock();
};

