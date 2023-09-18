#pragma once
#include "CoreMinimal.h"
#include "RewardItemDetails.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTECUSTOMIZATION_API FRewardItemDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    FRewardItemDetails();
};

