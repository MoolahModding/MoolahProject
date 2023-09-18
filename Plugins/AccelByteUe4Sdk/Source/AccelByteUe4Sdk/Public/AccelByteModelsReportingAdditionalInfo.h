#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsReportingAdditionalInfo.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsReportingAdditionalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Screenshots;
    
    FAccelByteModelsReportingAdditionalInfo();
};

