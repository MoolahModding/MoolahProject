#pragma once
#include "CoreMinimal.h"
#include "SBZDifficultyConfiguration.h"
#include "SBZSecurityFirmRotation.generated.h"

USTRUCT(BlueprintType)
struct FSBZSecurityFirmRotation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZDifficultyConfiguration> Configurations;
    
    STARBREEZE_API FSBZSecurityFirmRotation();
};

