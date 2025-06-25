#pragma once
#include "CoreMinimal.h"
#include "SBZInternalChallengeProgressItem.generated.h"

USTRUCT(BlueprintType)
struct FSBZInternalChallengeProgressItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemSku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetQuantity;
    
    STARBREEZE_API FSBZInternalChallengeProgressItem();
};

