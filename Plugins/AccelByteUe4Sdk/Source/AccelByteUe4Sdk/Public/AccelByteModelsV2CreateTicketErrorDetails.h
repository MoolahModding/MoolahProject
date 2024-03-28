#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2CreateTicketErrorDetails.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2CreateTicketErrorDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TicketID;
    
    FAccelByteModelsV2CreateTicketErrorDetails();
};

