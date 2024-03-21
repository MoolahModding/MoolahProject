#pragma once
#include "CoreMinimal.h"
#include "SBZDLCReward.generated.h"

USTRUCT(BlueprintType)
struct FSBZDLCReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DLCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EntitlementArray;
    
    STARBREEZE_API FSBZDLCReward();
};

