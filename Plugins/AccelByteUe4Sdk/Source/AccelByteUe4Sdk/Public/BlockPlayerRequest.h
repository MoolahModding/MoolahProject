#pragma once
#include "CoreMinimal.h"
#include "BlockPlayerRequest.generated.h"

USTRUCT(BlueprintType)
struct FBlockPlayerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserID;
    
    ACCELBYTEUE4SDK_API FBlockPlayerRequest();
};

