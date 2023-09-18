#pragma once
#include "CoreMinimal.h"
#include "SBZCustomPrimitiveData.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZCustomPrimitiveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Data[36];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> MorphTargets;
    
    FSBZCustomPrimitiveData();
};

