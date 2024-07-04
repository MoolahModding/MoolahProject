#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeDailyBlock.h"
#include "SBZChallengeDailySettings.generated.h"

USTRUCT(BlueprintType)
struct FSBZChallengeDailySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZChallengeDailyBlock BlockArray;
    
    STARBREEZE_API FSBZChallengeDailySettings();
};

