#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2Ticket.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2Ticket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TicketId;
    
    FAccelByteModelsV2Ticket();
};

