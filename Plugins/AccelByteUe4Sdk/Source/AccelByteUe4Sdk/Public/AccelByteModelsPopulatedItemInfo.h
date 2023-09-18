#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsItemInfo.h"
#include "AccelByteModelsPopulatedItemInfo.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPopulatedItemInfo : public FAccelByteModelsItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsItemInfo> Items;
    
    FAccelByteModelsPopulatedItemInfo();
};

