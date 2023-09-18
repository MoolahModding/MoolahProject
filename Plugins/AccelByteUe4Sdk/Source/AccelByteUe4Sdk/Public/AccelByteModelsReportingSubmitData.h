#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsReportingAdditionalInfo.h"
#include "AccelByteModelsReportingSubmitDataBase.h"
#include "AccelByteModelsReportingSubmitData.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsReportingSubmitData : public FAccelByteModelsReportingSubmitDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsReportingAdditionalInfo AdditionalInfo;
    
    FAccelByteModelsReportingSubmitData();
};

