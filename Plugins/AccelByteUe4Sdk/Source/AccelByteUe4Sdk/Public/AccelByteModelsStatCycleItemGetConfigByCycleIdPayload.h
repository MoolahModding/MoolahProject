#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsStatCycleItemGetItemListPayload.h"
#include "AccelByteModelsStatCycleItemGetConfigByCycleIdPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload : public FAccelByteModelsStatCycleItemGetItemListPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload();
};

