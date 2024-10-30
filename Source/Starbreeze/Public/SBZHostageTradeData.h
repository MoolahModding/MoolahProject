#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZHostageTradeData.generated.h"

USTRUCT(BlueprintType)
struct FSBZHostageTradeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TradeCount;
    
    STARBREEZE_API FSBZHostageTradeData();
};

