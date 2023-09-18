#pragma once
#include "CoreMinimal.h"
#include "ChallengeProgressItem.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTECUSTOMIZATION_API FChallengeProgressItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetQuantity;
    
    FChallengeProgressItem();
};

