#pragma once
#include "CoreMinimal.h"
#include "UserDataResponse.h"
#include "ListUserDataResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FListUserDataResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserDataResponse> Data;
    
    FListUserDataResponse();
};

