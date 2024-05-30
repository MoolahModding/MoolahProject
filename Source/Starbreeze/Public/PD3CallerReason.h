#pragma once
#include "CoreMinimal.h"
#include "PD3CallerReason.generated.h"

class USBZActionNotificationAsset;

USTRUCT(BlueprintType)
struct FPD3CallerReason {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZActionNotificationAsset* Reason[16];
    
    STARBREEZE_API FPD3CallerReason();
};

