#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2CreateTicketErrorDetails.h"
#include "ErrorCreateMatchmakingTicketV2.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FErrorCreateMatchmakingTicketV2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExistingTicketID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsV2CreateTicketErrorDetails MessageVariables;
    
    FErrorCreateMatchmakingTicketV2();
};

