#pragma once
#include "CoreMinimal.h"
#include "SBZCosmeticsPartSlot.h"
#include "SBZSuitPartSlot.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USBZSuitPartSlot : public USBZCosmeticsPartSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SuitPart;
    
    USBZSuitPartSlot();

};

