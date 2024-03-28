#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "AccelByteModelsPredefinedEvent.h"
#include "AccelByteModelsGroupCustomRuleUpdatedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsGroupCustomRuleUpdatedPayload : public FAccelByteModelsPredefinedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper GroupRules;
    
    FAccelByteModelsGroupCustomRuleUpdatedPayload();
};

