#pragma once
#include "CoreMinimal.h"
#include "EAccelByteOptionalBool.h"
#include "AccelByteModelsActionUpdateSystemMessage.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsActionUpdateSystemMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteOptionalBool Read;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteOptionalBool Keep;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsActionUpdateSystemMessage();
};

