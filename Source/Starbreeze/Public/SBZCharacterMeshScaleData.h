#pragma once
#include "CoreMinimal.h"
#include "SBZCharacterMeshScaleData.generated.h"

USTRUCT(BlueprintType)
struct FSBZCharacterMeshScaleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ScaleFactors;
    
    STARBREEZE_API FSBZCharacterMeshScaleData();
};

