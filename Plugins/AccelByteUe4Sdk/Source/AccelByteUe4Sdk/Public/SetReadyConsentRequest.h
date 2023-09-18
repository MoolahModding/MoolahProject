#pragma once
#include "CoreMinimal.h"
#include "SetReadyConsentRequest.generated.h"

USTRUCT(BlueprintType)
struct FSetReadyConsentRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString matchId;
    
    ACCELBYTEUE4SDK_API FSetReadyConsentRequest();
};

