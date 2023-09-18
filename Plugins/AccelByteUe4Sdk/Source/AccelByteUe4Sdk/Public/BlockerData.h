#pragma once
#include "CoreMinimal.h"
#include "BlockerData.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FBlockerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    FBlockerData();
};

