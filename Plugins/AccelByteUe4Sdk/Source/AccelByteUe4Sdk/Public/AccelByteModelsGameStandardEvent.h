#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGameStandardEvent.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsGameStandardEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameStandardEventName;
    
    FAccelByteModelsGameStandardEvent();
};

