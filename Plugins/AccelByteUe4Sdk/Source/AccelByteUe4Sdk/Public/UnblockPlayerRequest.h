#pragma once
#include "CoreMinimal.h"
#include "UnblockPlayerRequest.generated.h"

USTRUCT(BlueprintType)
struct FUnblockPlayerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserID;
    
    ACCELBYTEUE4SDK_API FUnblockPlayerRequest();
};

