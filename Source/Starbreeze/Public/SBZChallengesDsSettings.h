#pragma once
#include "CoreMinimal.h"
#include "SBZChallengesDsSettingsBlock.h"
#include "SBZChallengesDsSettings.generated.h"

USTRUCT(BlueprintType)
struct FSBZChallengesDsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZChallengesDsSettingsBlock BlockArray;
    
    STARBREEZE_API FSBZChallengesDsSettings();
};

