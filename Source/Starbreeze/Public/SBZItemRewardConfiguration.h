#pragma once
#include "CoreMinimal.h"
#include "SBZItemRewardConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FSBZItemRewardConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemSku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatCode;
    
    STARBREEZE_API FSBZItemRewardConfiguration();
};

