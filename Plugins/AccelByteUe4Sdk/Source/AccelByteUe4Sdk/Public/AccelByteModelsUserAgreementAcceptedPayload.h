#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsAgreementDocument.h"
#include "AccelByteModelsPredefinedEvent.h"
#include "AccelByteModelsUserAgreementAcceptedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUserAgreementAcceptedPayload : public FAccelByteModelsPredefinedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsAgreementDocument> AgreementDocuments;
    
    FAccelByteModelsUserAgreementAcceptedPayload();
};

