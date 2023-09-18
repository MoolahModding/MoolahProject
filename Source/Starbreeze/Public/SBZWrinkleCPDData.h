#pragma once
#include "CoreMinimal.h"
#include "SBZWrinklePackedFloatData.h"
#include "SBZWrinkleCPDData.generated.h"

USTRUCT(BlueprintType)
struct FSBZWrinkleCPDData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CPDIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWrinklePackedFloatData> PackedFloatDataArray;
    
    STARBREEZE_API FSBZWrinkleCPDData();
};

