#pragma once
#include "CoreMinimal.h"
#include "StatsDMetric.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FStatsDMetric {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Tags;
    
    FStatsDMetric();
};

