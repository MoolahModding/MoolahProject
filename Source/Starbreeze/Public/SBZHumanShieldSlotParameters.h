#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZHumanShieldEnterType.h"
#include "SBZHumanShieldSlotParameters.generated.h"

USTRUCT(BlueprintType)
struct FSBZHumanShieldSlotParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZHumanShieldEnterType HumanShieldEnterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    STARBREEZE_API FSBZHumanShieldSlotParameters();
};

