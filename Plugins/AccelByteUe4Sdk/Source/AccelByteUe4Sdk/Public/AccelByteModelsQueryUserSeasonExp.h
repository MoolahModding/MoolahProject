#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsQueryUserSeasonExp.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsQueryUserSeasonExp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Tags;
    
    FAccelByteModelsQueryUserSeasonExp();
};

