#pragma once
#include "CoreMinimal.h"
#include "SBZCombinedBagType.generated.h"

class USBZBagType;

USTRUCT(BlueprintType)
struct FSBZCombinedBagType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBagType* InBagType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBagType* OutBagType;
    
    STARBREEZE_API FSBZCombinedBagType();
};

