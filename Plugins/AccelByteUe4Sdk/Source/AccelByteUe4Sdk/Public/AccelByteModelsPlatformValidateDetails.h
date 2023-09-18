#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPlatformPredicateValidateResults.h"
#include "AccelByteModelsPlatformValidateDetails.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPlatformValidateDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsPlatformPredicateValidateResults> PredicateValidateResults;
    
    FAccelByteModelsPlatformValidateDetails();
};

