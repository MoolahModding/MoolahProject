#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsReportingAdditionalInfoChat.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsReportingAdditionalInfoChat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChatCreatedAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TopicId;
    
    FAccelByteModelsReportingAdditionalInfoChat();
};

