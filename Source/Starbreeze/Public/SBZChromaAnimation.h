#pragma once
#include "CoreMinimal.h"
#include "SBZChromaAnimation.generated.h"

USTRUCT(BlueprintType)
struct FSBZChromaAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> BulkData;
    
    STARBREEZE_API FSBZChromaAnimation();
};

