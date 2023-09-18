#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLimitOffsetRequest.h"
#include "EAccelByteGroupListSortBy.h"
#include "AccelByteModelsGetGroupMembersListByGroupIdRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsGetGroupMembersListByGroupIdRequest : public FAccelByteModelsLimitOffsetRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteGroupListSortBy SortBy;
    
    FAccelByteModelsGetGroupMembersListByGroupIdRequest();
};

