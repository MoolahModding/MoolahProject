#pragma once
#include "CoreMinimal.h"
#include "SBZMaximumPenetrationCountDistance.generated.h"

USTRUCT(BlueprintType)
struct FSBZMaximumPenetrationCountDistance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    STARBREEZE_API FSBZMaximumPenetrationCountDistance();
};

