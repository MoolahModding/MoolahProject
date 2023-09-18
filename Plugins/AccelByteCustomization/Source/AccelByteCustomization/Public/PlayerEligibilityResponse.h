#pragma once
#include "CoreMinimal.h"
#include "PlayerEligibilityResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTECUSTOMIZATION_API FPlayerEligibilityResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsComply;
    
    FPlayerEligibilityResponse();
};

