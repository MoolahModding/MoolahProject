#pragma once
#include "CoreMinimal.h"
#include "BaseUserInfo.h"
#include "ListBulkUserInfo.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FListBulkUserInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBaseUserInfo> Data;
    
    FListBulkUserInfo();
};

