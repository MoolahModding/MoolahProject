#pragma once
#include "CoreMinimal.h"
#include "AcceptedPolicies.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAcceptedPolicies {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAccepted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalizedPolicyVersionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PolicyVersionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PolicyId;
    
    FAcceptedPolicies();
};

