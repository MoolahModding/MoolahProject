#pragma once
#include "CoreMinimal.h"
#include "SBZMaskOfTheWeek.h"
#include "SBZTimeBasedPlayerContent.generated.h"

USTRUCT(BlueprintType)
struct FSBZTimeBasedPlayerContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZMaskOfTheWeek MaskOfTheWeek;
    
    STARBREEZE_API FSBZTimeBasedPlayerContent();
};

