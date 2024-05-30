#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZWorldEventBase.h"
#include "SBZPlayerNearWorldEvent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZPlayerNearWorldEvent : public USBZWorldEventBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval AngleRange;
    
public:
    USBZPlayerNearWorldEvent();

};

