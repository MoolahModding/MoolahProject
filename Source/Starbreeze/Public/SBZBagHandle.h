#pragma once
#include "CoreMinimal.h"
#include "SBZBagHandle.generated.h"

class USBZBagType;

USTRUCT(BlueprintType)
struct FSBZBagHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBagType* BagType;
    
    STARBREEZE_API FSBZBagHandle();
};

