#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMemberRole.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsGetMemberRolesListResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsGetMemberRolesListResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsMemberRole> Data;
    
    FAccelByteModelsGetMemberRolesListResponse();
};

