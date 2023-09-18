#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2SessionUser.h"
#include "AccelByteModelsV2GameSessionUserRejectedEvent.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsV2GameSessionUserRejectedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsV2SessionUser> Members;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RejectedID;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsV2GameSessionUserRejectedEvent();
};

