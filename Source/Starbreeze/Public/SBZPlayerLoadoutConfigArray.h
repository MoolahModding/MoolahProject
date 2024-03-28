#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerLoadoutConfig.h"
#include "SBZPlayerLoadoutConfigArray.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerLoadoutConfigArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerLoadoutConfig> PlayerLoadoutConfigArray;
    
    FSBZPlayerLoadoutConfigArray();
};

