#pragma once
#include "CoreMinimal.h"
#include "SBZInventoryBaseData.h"
#include "SBZPayDayCreditData.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZPayDayCreditData : public USBZInventoryBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExternaltemId;
    
    USBZPayDayCreditData();
};

