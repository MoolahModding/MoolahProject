#pragma once
#include "CoreMinimal.h"
#include "SBZFeatureToggleMap.generated.h"

USTRUCT(BlueprintType)
struct FSBZFeatureToggleMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, bool> FeatureToggleMapping;
    
    STARBREEZE_API FSBZFeatureToggleMap();
};

