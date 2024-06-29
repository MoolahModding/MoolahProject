#pragma once
#include "CoreMinimal.h"
#include "SBZMaskOfTheWeekBlock.h"
#include "SBZMaskOfTheWeek.generated.h"

USTRUCT(BlueprintType)
struct FSBZMaskOfTheWeek {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZMaskOfTheWeekBlock> MaskOfTheWeekBlockArray;
    
    STARBREEZE_API FSBZMaskOfTheWeek();
};

