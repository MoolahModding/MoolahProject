#pragma once
#include "CoreMinimal.h"
#include "BlockedData.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FBlockedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BlockedUserId;
    
    FBlockedData();
};

