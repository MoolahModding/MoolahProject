#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsStatCycleItemGetItemListPayload.h"
#include "AccelByteModelsStatCycleItemGetCycleItemsPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsStatCycleItemGetCycleItemsPayload : public FAccelByteModelsStatCycleItemGetItemListPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> StatCodes;
    
    FAccelByteModelsStatCycleItemGetCycleItemsPayload();
};

