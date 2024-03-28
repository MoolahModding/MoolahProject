#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPredefinedEvent.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPredefinedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PreDefinedEventName;
    
    FAccelByteModelsPredefinedEvent();
};

