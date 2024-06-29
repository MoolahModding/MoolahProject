#pragma once
#include "CoreMinimal.h"
#include "SBZHoldOutDroneTagReactionConfig.h"
#include "SBZHoldOutDroneTagReactionConfigArray.generated.h"

USTRUCT(BlueprintType)
struct FSBZHoldOutDroneTagReactionConfigArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZHoldOutDroneTagReactionConfig> Configs;
    
    STARBREEZE_API FSBZHoldOutDroneTagReactionConfigArray();
};

