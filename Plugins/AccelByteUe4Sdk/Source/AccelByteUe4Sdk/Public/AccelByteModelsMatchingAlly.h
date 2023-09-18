#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMatchingParty.h"
#include "AccelByteModelsMatchingAlly.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsMatchingAlly {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsMatchingParty> Matching_parties;
    
    FAccelByteModelsMatchingAlly();
};

