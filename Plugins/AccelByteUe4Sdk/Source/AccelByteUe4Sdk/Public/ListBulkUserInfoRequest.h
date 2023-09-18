#pragma once
#include "CoreMinimal.h"
#include "ListBulkUserInfoRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FListBulkUserInfoRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UserIds;
    
    FListBulkUserInfoRequest();
};

