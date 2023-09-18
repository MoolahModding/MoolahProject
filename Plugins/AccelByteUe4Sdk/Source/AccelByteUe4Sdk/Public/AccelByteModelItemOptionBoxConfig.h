#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelItemBoxItem.h"
#include "AccelByteModelItemOptionBoxConfig.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelItemOptionBoxConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelItemBoxItem> BoxItems;
    
    FAccelByteModelItemOptionBoxConfig();
};

