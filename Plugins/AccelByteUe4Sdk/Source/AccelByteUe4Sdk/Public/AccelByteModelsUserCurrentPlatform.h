#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserCurrentPlatform.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUserCurrentPlatform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString currentPlatform;
    
    FAccelByteModelsUserCurrentPlatform();
};

