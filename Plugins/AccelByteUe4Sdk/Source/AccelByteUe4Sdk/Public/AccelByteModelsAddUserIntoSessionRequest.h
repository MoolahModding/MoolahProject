#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsAddUserIntoSessionRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsAddUserIntoSessionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString User_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Party_id;
    
    FAccelByteModelsAddUserIntoSessionRequest();
};

