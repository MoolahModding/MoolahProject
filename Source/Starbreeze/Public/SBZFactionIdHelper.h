#pragma once
#include "CoreMinimal.h"
#include "SBZFactionIdHelper.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZFactionIdHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FactionId;
    
    FSBZFactionIdHelper();
};

