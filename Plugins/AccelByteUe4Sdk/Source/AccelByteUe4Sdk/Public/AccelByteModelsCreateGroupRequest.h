#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGroupRules.h"
#include "AccelByteModelsGroupUpdatable.h"
#include "AccelByteModelsCreateGroupRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsCreateGroupRequest : public FAccelByteModelsGroupUpdatable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConfigurationCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupMaxMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsGroupRules GroupRules;
    
    FAccelByteModelsCreateGroupRequest();
};

