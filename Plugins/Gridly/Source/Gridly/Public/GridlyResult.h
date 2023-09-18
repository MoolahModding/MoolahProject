#pragma once
#include "CoreMinimal.h"
#include "GridlyResult.generated.h"

USTRUCT(BlueprintType)
struct GRIDLY_API FGridlyResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    FGridlyResult();
};

