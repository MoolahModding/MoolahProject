#pragma once
#include "CoreMinimal.h"
#include "SBZItemRewardConfiguration.h"
#include "SBZClientConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FSBZClientConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZItemRewardConfiguration> ItemRewardConfigurationArray;
    
    STARBREEZE_API FSBZClientConfiguration();
};

