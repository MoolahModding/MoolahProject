#pragma once
#include "CoreMinimal.h"
#include "SetRejectConsentRequest.generated.h"

USTRUCT(BlueprintType)
struct FSetRejectConsentRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString matchId;
    
    ACCELBYTEUE4SDK_API FSetRejectConsentRequest();
};

