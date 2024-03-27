#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2GameSessionBaseRequest.h"
#include "AccelByteModelsV2GameSessionUpdateRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2GameSessionUpdateRequest : public FAccelByteModelsV2GameSessionBaseRequest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeEmptyTeams;
    
    FAccelByteModelsV2GameSessionUpdateRequest();
};

