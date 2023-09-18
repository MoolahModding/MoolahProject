#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsReportingAdditionalInfoChat.h"
#include "AccelByteModelsReportingSubmitDataBase.h"
#include "AccelByteModelsReportingSubmitDataChatRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsReportingSubmitDataChatRequest : public FAccelByteModelsReportingSubmitDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsReportingAdditionalInfoChat AdditionalInfo;
    
    FAccelByteModelsReportingSubmitDataChatRequest();
};

