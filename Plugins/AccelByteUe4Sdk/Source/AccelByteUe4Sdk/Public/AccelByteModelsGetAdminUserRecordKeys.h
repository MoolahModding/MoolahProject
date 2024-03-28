#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetAdminUserRecordKeys.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsGetAdminUserRecordKeys {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString User_Id;
    
    FAccelByteModelsGetAdminUserRecordKeys();
};

