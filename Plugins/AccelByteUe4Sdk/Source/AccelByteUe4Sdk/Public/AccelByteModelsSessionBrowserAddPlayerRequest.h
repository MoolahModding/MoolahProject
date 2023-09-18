#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSessionBrowserAddPlayerRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsSessionBrowserAddPlayerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString User_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool As_spectator;
    
    FAccelByteModelsSessionBrowserAddPlayerRequest();
};

